#pragma clang diagnostic push
#pragma ide diagnostic ignored "bugprone-branch-clone"
#pragma once

#include "productionLine.h"
#include "../worker/worker.cpp"

productionLine::productionLine() {
    this->belts.resize(NUMBER_OF_BELTS);
    this->workers.resize(NUMBER_OF_BELTS);

    // Create different workers for all of the belts slots ...
    for (auto &workersBelt : this->workers)
        workersBelt.resize(NUMBER_OF_BELT_SIDES);

    for (auto &workersBelt : this->workers) {
        for (auto &workersRow: workersBelt) {
            workersRow.resize(NUMBER_OF_WORKERS_PER_BELT_SIDE);
        }
    }
}


void productionLine::processSystemTickBeltSLotConflict(beltSlotItem &currentSlot,
                                                       worker &beltLeftWorker,
                                                       worker &beltRightWorker,
                                                       const int systemTick) {
    /* Election algorithm to predict which worker is nearly supposed to give better output after taking
       the current item.
       - Priority is for the left Worker.
       - If any of them can place a complete item to the belt, go with it.
       - if none of them can place item to the belt, give it to the one with the higher number of items.
    */
    if (beltLeftWorker.canPutCompletedItemToBelt()) {
        beltLeftWorker.takeItem(currentSlot);
    } else if (beltRightWorker.canPutCompletedItemToBelt()) {
        beltRightWorker.takeItem(currentSlot);
    } else if (beltLeftWorker.getNumberOfItemsInHands() >= beltRightWorker.getNumberOfItemsInHands()) {
        beltLeftWorker.takeItem(currentSlot);
    } else if (beltLeftWorker.getNumberOfItemsInHands() < beltRightWorker.getNumberOfItemsInHands()) {
        beltRightWorker.takeItem(currentSlot);
    }
}

void productionLine::processSystemTickBeltSLot(beltSlotItem &currentSlot,
                                               worker &beltLeftWorker,
                                               worker &beltRightWorker,
                                               const int systemTick) {
    bool leftWorkerCanTakeIt = beltLeftWorker.canTakeItem(currentSlot);
    bool rightWorkerCanTakeIt = beltLeftWorker.canTakeItem(currentSlot);
    // Try to give the item in the slot to any of the workers
    if (leftWorkerCanTakeIt && rightWorkerCanTakeIt) {
        this->processSystemTickBeltSLotConflict(currentSlot, beltLeftWorker, beltRightWorker, systemTick);
    } else if (leftWorkerCanTakeIt) {
        beltLeftWorker.takeItem(currentSlot);
    } else if (rightWorkerCanTakeIt) {
        beltRightWorker.takeItem(currentSlot);
    }
    // If the slot is empty, try to let a worker place a completed item there.
    if (!rightWorkerCanTakeIt && !leftWorkerCanTakeIt &&
        currentSlot.getBeltSlotItemType() == BELT_SLOT_ITEM_TYPE_EMPTY) {
        if (beltLeftWorker.canPutCompletedItemToBelt()) {
            beltLeftWorker.putCompletedItemToBelt(currentSlot);
        } else if (beltRightWorker.canPutCompletedItemToBelt()) {
            beltRightWorker.putCompletedItemToBelt(currentSlot);
        }
    }
}

void productionLine::processSystemTick(int beltLineIndex, const int systemTick) {
    // Step 1: Go through all of the belt slots, and process each of the belt slots
    for (int beltSlot = 0; beltSlot < this->belts[beltLineIndex].getBeltSlots().size(); beltSlot++) {
        beltSlotItem &currentSlot = this->belts[beltLineIndex].getBeltSlots()[beltSlot];
        worker &beltLeftWorker = this->workers[beltLineIndex][beltSlot][0];
        worker &beltRightWorker = this->workers[beltLineIndex][beltSlot][1];
        this->processSystemTickBeltSLot(currentSlot, beltLeftWorker, beltRightWorker, systemTick);
    }
    // Step 2: Let this belt move one step
    this->belts[beltLineIndex].move();
}

void productionLine::runProductionLine() {
    // The next function can be done in multi-threading.
    for (int tick = 0; tick < NUMBER_OF_SYSTEM_TICKS; tick++) {
        for (int beltLineIndex = 0; beltLineIndex < NUMBER_OF_BELTS; beltLineIndex++) {
            this->processSystemTick(beltLineIndex, tick);
        }
    }
}

#pragma clang diagnostic pop