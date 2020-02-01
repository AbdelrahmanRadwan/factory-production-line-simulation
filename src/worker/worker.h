
#ifndef FACTORY_PRODUCTION_LINE_SIMULATION_WORKER_H
#define FACTORY_PRODUCTION_LINE_SIMULATION_WORKER_H

#include "../belt/beltSlotItem.h"

class worker {
/*
    A worker is basically
    A worker can have a unique id, list of pieces in hand
 */
private:
    int id;
    static int idCounter;
    vector<beltSlotItem> itemsInHands;
public:
    worker();

    bool canTakeItem(beltSlotItem);

    bool canPutCompletedItemToBelt();

    void putCompletedItemToBelt(beltSlotItem &);

    void takeItem(beltSlotItem &);

    int getNumberOfItemsInHands();
};


#endif //FACTORY_PRODUCTION_LINE_SIMULATION_WORKER_H
