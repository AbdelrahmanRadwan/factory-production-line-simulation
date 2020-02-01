#pragma once

#include "productionLine.h"
#include "../worker/worker.cpp"

productionLine::productionLine() {
    this->belts.resize(NUMBER_OF_BELTS);
    this->workers.resize(NUMBER_OF_BELTS);

    // Create different workers for all of the belts slots ...
    for (auto &workersBelt : this->workers)
        workersBelt.resize(NUMBER_OF_BELT_SIDES);

    for (auto &workersBelt : this->workers)
        for (auto &workersRow: workersBelt)
            workersRow.resize(NUMBER_OF_WORKERS_PER_BELT_SIDE);
}

void productionLine::processSystemTickBeltSLot(beltSlotItem &currentSlot,
                                               worker &beltLeftWorker,
                                               worker &beltRightWorker) {
    cout << "ASdasdsad" << endl;

}

void productionLine::processSystemTick(int beltLineIndex) {
    // Step 1: Go through all of the belt slots, and process each of the belt slots
    for (int beltSlot = 0; beltSlot < this->belts[beltLineIndex].getBeltSlots().size(); beltSlot++) {
        beltSlotItem &currentSlot = this->belts[beltLineIndex].getBeltSlots()[beltSlot];
        worker &beltLeftWorker = this->workers[beltLineIndex][beltSlot][0];
        worker &beltRightWorker = this->workers[beltLineIndex][beltSlot][1];
        this->processSystemTickBeltSLot(currentSlot, beltLeftWorker, beltRightWorker);
    }
    // Step 2: Let this belt move one step
    this->belts[beltLineIndex].move();
}

void productionLine::runProductionLine() {
    // The next function can be done in multi-threading.
    for (int tick = 0; tick < NUMBER_OF_SYSTEM_TICKS; tick++) {
        for (int beltLineIndex = 0; beltLineIndex < NUMBER_OF_BELTS; beltLineIndex++)
            this->processSystemTick(beltLineIndex);
    }
}


