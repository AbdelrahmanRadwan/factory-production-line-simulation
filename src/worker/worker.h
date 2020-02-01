
#ifndef FACTORY_PRODUCTION_LINE_SIMULATION_WORKER_H
#define FACTORY_PRODUCTION_LINE_SIMULATION_WORKER_H

#include "../belt/beltSlotItem.h"

class worker {
/*
    A worker is basically
    A worker can have a unique id, list of pieces in hand
 */
private:
    static int idCounter;
    vector<beltSlotItem> itemsInHands;
public:
    int id;

    worker();

    void takeItem(beltSlotItem);
};


#endif //FACTORY_PRODUCTION_LINE_SIMULATION_WORKER_H
