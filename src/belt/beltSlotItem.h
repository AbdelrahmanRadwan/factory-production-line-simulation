#ifndef FACTORY_PRODUCTION_LINE_SIMULATION_BELTSLOTITEM_H
#define FACTORY_PRODUCTION_LINE_SIMULATION_BELTSLOTITEM_H

#include "../libs/headers.h"

class beltSlotItem {

private:
    int id;
    static int idCounter;
    string beltSlotItemType;
    int readyToBePlacedTickTime;

    static string getNormallyDistributedBeltSlotItemType();

public:
    beltSlotItem();

    int &getReadyToBePlacedTickTime();

    string &getBeltSlotItemType();
};

#endif //FACTORY_PRODUCTION_LINE_SIMULATION_BELTSLOTITEM_H
