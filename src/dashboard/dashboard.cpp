#pragma once

#include "dashboard.h"


dashboard::dashboard() {

}

void dashboard::printSystemStats(vector<vector<worker> > systemWorkers, belt systemBelt) {
    cout << "Delivered" << endl;
    for (auto deliveredItemsIterator = this->deliveredItems.begin();
         deliveredItemsIterator != this->deliveredItems.end(); deliveredItemsIterator++) {
        cout << "A number of " << deliveredItemsIterator->second << " " << deliveredItemsIterator->first
             << " cells type went out of the belt." << endl;
    }
    this->printSystemGraph(systemWorkers, systemBelt, false, -1);

    unordered_map<string, int> currentBeltFreq;
    for (auto beltSlot: systemBelt.getBeltSlots()) {
        currentBeltFreq[beltSlot.getBeltSlotItemType()]++;
    }

    cout << "Current Belt Analysis:" << endl;
    for (auto currentBeltFreqIterator = currentBeltFreq.begin();
         currentBeltFreqIterator != currentBeltFreq.end(); currentBeltFreqIterator++) {
        cout << "A number of " << currentBeltFreqIterator->second << " " << currentBeltFreqIterator->first
             << " cells type are still in the current belt." << endl;
    }
    cout << endl << "Current Workers Analysis:" << endl;
    for (int workersRow = 0; workersRow < NUMBER_OF_BELT_SIDES; workersRow++) {
        for (int systemWorkerIndex = 0; systemWorkerIndex < NUMBER_OF_WORKERS_PER_BELT_SIDE; systemWorkerIndex++) {
            cout << "Worker At row " << workersRow << " and column " << systemWorkerIndex << " has: "
                 << systemWorkers[workersRow][systemWorkerIndex].getItemsInHandsString() << endl;
        }
    }
}

void dashboard::printSystemGraph(vector<vector<worker> > systemWorkers, belt systemBelt,
                                 bool initialGraph, int systemTickNumber) {
    cout << "Tick #" << (systemTickNumber != -1 ? systemTickNumber : NUMBER_OF_SYSTEM_TICKS) << " "
         << (initialGraph ? DRAW_SYSTEM_HEADER_INITIAL : DRAW_SYSTEM_HEADER) << endl;
    for (int i = 0; i < systemWorkers[0].size(); i++) {
        cout << "   v";
    }
    cout << endl << DRAW_SEPARATOR_LINE << endl;
    for (auto slot: systemBelt.getBeltSlots()) {
        cout << " | " << DRAW_MAP[slot.getBeltSlotItemType()];
    }
    cout << " |";
    cout << endl << DRAW_SEPARATOR_LINE << endl;
    for (int i = 0; i < systemWorkers[0].size(); i++) {
        cout << "   ^";
    }
    cout << endl << endl;
}

void dashboard::deliverItemFromBelt(beltSlotItem itemType) {
    this->deliveredItems[itemType.getBeltSlotItemType()]++;
}
