#include "beltSlotItem.h"
#include "../libs/vars.h"

beltSlotItem::beltSlotItem() {
    this->beltSlotItemType = beltSlotItem::getNormallyDistributedBeltSlotItemType();
}

string beltSlotItem::getNormallyDistributedBeltSlotItemType(){
    return BELT_SLOT_ITEM_TYPES[rand() % BELT_SLOT_ITEM_TYPES_SIZE];
}

string beltSlotItem::getBeltSlotItemType() {
    return this->beltSlotItemType;
}
