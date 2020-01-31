#ifndef FACTORY_PRODUCTION_LINE_SIMULATION_BELT_H
#define FACTORY_PRODUCTION_LINE_SIMULATION_BELT_H

#include "beltSlotItem.cpp"
#include "../libs/headers.h"

class belt {
private:
    int id;
    static int idCounter;
    vector<beltSlotItem> beltSlots;
    void beltShiftRight();
public:
    belt();
    void move();
};


#endif //FACTORY_PRODUCTION_LINE_SIMULATION_BELT_H
