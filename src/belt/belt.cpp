#pragma once

#include "belt.h"

int belt::idCounter = 0;

belt::belt() {
    // Initialize the belt with the belt slots of the different types
    this->id = ++idCounter;
    this->beltSlots.resize(NUMBER_OF_BELT_SLOTS);
    for (auto &beltSlot : this->beltSlots)
        beltSlot = beltSlotItem();
}

beltSlotItem belt::move() {
    const beltSlotItem removedSlotItem = this->beltShiftRight();
    this->beltSlots[0] = beltSlotItem();
    return removedSlotItem;
}

beltSlotItem belt::beltShiftRight() {
    // Deliver the last item in the belt.
    const beltSlotItem removedSlotItem = this->beltSlots[NUMBER_OF_BELT_SLOTS - 1];
    // Shift the items to the right.
    for (int i = NUMBER_OF_BELT_SLOTS - 1; i > 0; i--)
        this->beltSlots[i] = this->beltSlots[i - 1];
    return removedSlotItem;
}

vector<beltSlotItem> &belt::getBeltSlots() {
    return this->beltSlots;
}
