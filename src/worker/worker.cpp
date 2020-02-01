#pragma once

#include "worker.h"

int worker::idCounter = 0;

worker::worker() {
    this->id = ++idCounter;
}

void worker::takeItem(beltSlotItem item) {
    this->itemsInHands.push_back(item);
}