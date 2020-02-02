#include "dashboard.h"

dashboard::dashboard() {

}

void dashboard::printSystemGraph(vector<vector<worker> > systemWorkers, belt systemBelt) {
    cout<<DRAW_SYSTEM_HEADER<<endl;
    for (int i = 0; i < systemWorkers[0].size(); i++) {
        cout << "   v";
    }
    cout << endl << DRAW_SEPARATOR_LINE << endl;
    for (auto slot: systemBelt.getBeltSlots()) {
        cout << " | " << DRAW_MAP[slot.getBeltSlotItemType()];
    }
    cout << " |";
    cout << endl << DRAW_SEPARATOR_LINE << endl;
    for (int i = 0; i < systemWorkers[0].size(); i++) {
        cout << "   ^";
    }
    cout << endl << endl;
}
