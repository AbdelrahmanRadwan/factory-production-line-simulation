#pragma once

#include "productionLine.h"
#include "../worker/worker.cpp"

productionLine::productionLine() {
    this->belts.resize(NUMBER_OF_BELTS);
    this->workers.resize(NUMBER_OF_BELTS);

    // Create different workers for all of the belts slots ...
    for (auto &workersBelt : this->workers) {
        workersBelt.resize(NUMBER_OF_BELT_SIDES);
    }
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
    if (beltLeftWorker.canPutCompletedItemToBelt(systemTick)) {
        beltLeftWorker.takeItem(currentSlot, systemTick);
    } else if (beltRightWorker.canPutCompletedItemToBelt(systemTick)) {
        beltRightWorker.takeItem(currentSlot, systemTick);
    } else if (beltLeftWorker.getNumberOfItemsInHands() >= beltRightWorker.getNumberOfItemsInHands()) {
        beltLeftWorker.takeItem(currentSlot, systemTick);
    } else if (beltLeftWorker.getNumberOfItemsInHands() < beltRightWorker.getNumberOfItemsInHands()) {
        beltRightWorker.takeItem(currentSlot, systemTick);
    }
}

void productionLine::processSystemTickBeltSLot(beltSlotItem &currentSlot,
                                               worker &beltLeftWorker,
                                               worker &beltRightWorker,
                                               const int systemTick) {
    bool leftWorkerCanTakeIt = beltLeftWorker.canTakeItem(currentSlot);
    bool rightWorkerCanTakeIt = beltRightWorker.canTakeItem(currentSlot);
    // Try to give the item in the slot to any of the workers
    if (leftWorkerCanTakeIt && rightWorkerCanTakeIt) {
        this->processSystemTickBeltSLotConflict(currentSlot, beltLeftWorker, beltRightWorker, systemTick);
    } else if (leftWorkerCanTakeIt) {
        beltLeftWorker.takeItem(currentSlot, systemTick);
    } else if (rightWorkerCanTakeIt) {
        beltRightWorker.takeItem(currentSlot, systemTick);
    }
    // If no worker can take the current item, and the current item is an empty cell, then try to place any completed item in
    // If the slot is empty, try to let a worker place a completed item there.
    if (!rightWorkerCanTakeIt && !leftWorkerCanTakeIt &&
        currentSlot.getBeltSlotItemType() == BELT_SLOT_ITEM_TYPE_EMPTY) {
        if (beltLeftWorker.canPutCompletedItemToBelt(systemTick)) {
            beltLeftWorker.putCompletedItemToBelt(currentSlot);
        } else if (beltRightWorker.canPutCompletedItemToBelt(systemTick)) {
            beltRightWorker.putCompletedItemToBelt(currentSlot);
        }
    }
}

void productionLine::processSystemTick(const int beltLineIndex, const int systemTick) {
    this->productionLineSystemMonitor.printSystemGraph(this->workers[beltLineIndex], this->belts[beltLineIndex], true,
                                                       systemTick);
    // Step 1: Go through all of the belt slots, and process each of the belt slots
    // The next loop can be extracted in a multi-threaded function.
    for (int beltSlot = 0; beltSlot < this->belts[beltLineIndex].getBeltSlots().size(); beltSlot++) {
        beltSlotItem &currentSlot = this->belts[beltLineIndex].getBeltSlots()[beltSlot];
        worker &beltLeftWorker = this->workers[beltLineIndex][0][beltSlot];
        worker &beltRightWorker = this->workers[beltLineIndex][1][beltSlot];
        this->processSystemTickBeltSLot(currentSlot, beltLeftWorker, beltRightWorker, systemTick);
    }
    this->productionLineSystemMonitor.printSystemGraph(this->workers[beltLineIndex], this->belts[beltLineIndex], false,
                                                       systemTick);
    // Step 2: Let this belt move one step to the right.
    beltSlotItem removedSlotItem = this->belts[beltLineIndex].move();
    this->productionLineSystemMonitor.deliverItemFromBelt(removedSlotItem);
}

void productionLine::runProductionLine() {
    // The current function can be done in multi-threading.
    for (int beltLineIndex = 0; beltLineIndex < NUMBER_OF_BELTS; beltLineIndex++) {
        for (int tick = 0; tick < NUMBER_OF_SYSTEM_TICKS; tick++) {
            this->processSystemTick(beltLineIndex, tick);
        }
        this->productionLineSystemMonitor.printSystemStats(this->workers[beltLineIndex], this->belts[beltLineIndex]);
    }
}
