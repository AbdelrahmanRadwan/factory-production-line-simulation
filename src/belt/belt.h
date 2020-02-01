#ifndef FACTORY_PRODUCTION_LINE_SIMULATION_BELT_H
#define FACTORY_PRODUCTION_LINE_SIMULATION_BELT_H

#include "beltSlotItem.cpp"
#include "../libs/headers.h"

class belt {
private:
    int id;
    static int idCounter;

    void beltShiftRight();

    vector<beltSlotItem> beltSlots;

public:
    belt();

    void move();

    vector<beltSlotItem> getBeltSlots();
};


#endif //FACTORY_PRODUCTION_LINE_SIMULATION_BELT_H
