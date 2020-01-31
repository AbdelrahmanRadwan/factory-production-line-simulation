
#ifndef FACTORY_PRODUCTION_LINE_SIMULATION_WORKER_H
#define FACTORY_PRODUCTION_LINE_SIMULATION_WORKER_H

class worker {
/*
    A worker is basically
    A worker can have a unique id, list of pieces in hand
 */
private:
    static int idCounter;
    int id;
    vector<beltSlotItem> itemsInHands;
public:
    worker();
    void takeItem(beltSlotItem);
};


#endif //FACTORY_PRODUCTION_LINE_SIMULATION_WORKER_H
