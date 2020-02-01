#ifndef FACTORY_PRODUCTION_LINE_SIMULATION_PRODUCTIONLINE_H
#define FACTORY_PRODUCTION_LINE_SIMULATION_PRODUCTIONLINE_H

#include "../libs/vars.h"
#include "../worker/worker.cpp"
#include "../belt/belt.cpp"

class productionLine {
private:
    vector<belt> belts;
    /*
        Workers are represented as 3D vector
        Each belt has two rows of workers, each row has workers same as the number of the belt slots.
     */
    vector<vector<vector<worker> > > workers;

    void processSystemTick(int, int);

    void processSystemTickBeltSLot(beltSlotItem &,
                                   worker &,
                                   worker &,
                                   int);

    void processSystemTickBeltSLotConflict(beltSlotItem &,
                                           worker &,
                                           worker &,
                                           int);

public:
    productionLine();

    void runProductionLine();
};


#endif //FACTORY_PRODUCTION_LINE_SIMULATION_PRODUCTIONLINE_H
