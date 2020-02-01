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

void belt::move() {
    this->beltShiftRight();
    this->beltSlots[0] = beltSlotItem();
}

void belt::beltShiftRight() {
    for (int i = NUMBER_OF_BELT_SLOTS - 1; i > 0; i--)
        this->beltSlots[i] = this->beltSlots[i - 1];
}

vector<beltSlotItem> belt::getBeltSlots() {
    return this->beltSlots;
}
