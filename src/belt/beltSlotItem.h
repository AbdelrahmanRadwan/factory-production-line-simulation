#ifndef FACTORY_PRODUCTION_LINE_SIMULATION_BELTSLOTITEM_H
#define FACTORY_PRODUCTION_LINE_SIMULATION_BELTSLOTITEM_H

#include "../libs/headers.h"
class beltSlotItem {
private:
    static string getNormallyDistributedBeltSlotItemType();
    string beltSlotItemType;
public:
    string getBeltSlotItemType();
    beltSlotItem();
};


#endif //FACTORY_PRODUCTION_LINE_SIMULATION_BELTSLOTITEM_H
