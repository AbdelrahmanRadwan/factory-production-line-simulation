#include "src/productionLine/productionLine.cpp"

int main() {
    srand(time(NULL));
    productionLine productionLineFactorySystem;
    productionLineFactorySystem.runProductionLine();
    return 0;
}
