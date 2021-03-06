#pragma once

#include "beltSlotItem.h"

int beltSlotItem::idCounter = 0;

beltSlotItem::beltSlotItem() {
    this->id = ++idCounter;
    this->readyToBePlacedTickTime = -1;
    this->beltSlotItemType = beltSlotItem::getNormallyDistributedBeltSlotItemType();
}

string beltSlotItem::getNormallyDistributedBeltSlotItemType() {
    return BELT_SLOT_ITEM_TYPES[rand() % BELT_SLOT_ITEM_TYPES_SIZE];
}

string &beltSlotItem::getBeltSlotItemType() {
    return this->beltSlotItemType;
}

int &beltSlotItem::getReadyToBePlacedTickTime() {
    return this->readyToBePlacedTickTime;
}