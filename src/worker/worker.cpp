#pragma once

#include "worker.h"

int worker::idCounter = 0;

worker::worker() {
    this->id = ++idCounter;
}

void worker::takeItem(beltSlotItem &item) {
    this->itemsInHands.push_back(item);
    item.getBeltSlotItemType() = BELT_SLOT_ITEM_TYPE_PIECE_TAKEN; // Mark the item as taken
}

bool worker::canTakeItem(beltSlotItem item) {
    if (item.getBeltSlotItemType() == BELT_SLOT_ITEM_TYPE_EMPTY)
        return false;

    if (itemsInHands.size() <= 0)
        return true;
    else if (itemsInHands.size() == 1) {
        // Can be re-written to return item types are not equal
        if (this->itemsInHands[0].getBeltSlotItemType() == BELT_SLOT_ITEM_TYPE_COMPLETED_PIECE)
            return true;
        else if (this->itemsInHands[0].getBeltSlotItemType() != item.getBeltSlotItemType())
            return true;
        return false;
    } else if (itemsInHands.size() >= 2)
        return false;

    return false;
}

bool worker::canPutCompletedItemToBelt() {
    for (auto item: this->itemsInHands)
        if (item.getBeltSlotItemType() == BELT_SLOT_ITEM_TYPE_COMPLETED_PIECE)
            return true;
    return false;
}

void worker::putCompletedItemToBelt(beltSlotItem &item) {
    item.getBeltSlotItemType() = BELT_SLOT_ITEM_TYPE_COMPLETED_PIECE;
    for (auto it = this->itemsInHands.begin(); it != this->itemsInHands.end(); it++)
        if (it->getBeltSlotItemType() == BELT_SLOT_ITEM_TYPE_COMPLETED_PIECE)
            this->itemsInHands.erase(it);
}

int worker::getNumberOfItemsInHands() {
    return this->itemsInHands.size();
}
