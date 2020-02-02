#ifndef FACTORY_PRODUCTION_LINE_SIMULATION_PRODUCTIONLINE_H
#define FACTORY_PRODUCTION_LINE_SIMULATION_PRODUCTIONLINE_H

#include "../libs/vars.h"
#include "../belt/belt.cpp"
#include "../worker/worker.cpp"
#include "../dashboard/dashboard.cpp"

class productionLine {

private:
    vector<belt> belts;
    vector<vector<vector<worker> > > workers;
    dashboard productionLineSystemMonitor;

    void processSystemTick(int, int);

    void processSystemTickBeltSLot(beltSlotItem &, worker &, worker &, int);

    void processSystemTickBeltSLotConflict(beltSlotItem &, worker &, worker &, int);

public:
    productionLine();

    void runProductionLine();
};


#endif //FACTORY_PRODUCTION_LINE_SIMULATION_PRODUCTIONLINE_H
