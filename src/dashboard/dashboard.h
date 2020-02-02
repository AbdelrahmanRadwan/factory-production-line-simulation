#ifndef FACTORY_PRODUCTION_LINE_SIMULATION_DASHBOARD_H
#define FACTORY_PRODUCTION_LINE_SIMULATION_DASHBOARD_H


#include "../worker/worker.h"
#include "../belt/belt.h"

class dashboard {

private:
    unordered_map<string, int> deliveredItems;

public:
    dashboard();

    void deliverItemFromBelt(beltSlotItem);

    void printSystemGraph(vector<vector<worker> >, belt, bool, int);

    void printSystemStats(vector<vector<worker> >, belt);
};


#endif //FACTORY_PRODUCTION_LINE_SIMULATION_DASHBOARD_H
