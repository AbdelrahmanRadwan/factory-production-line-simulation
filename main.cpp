#include "src/productionLine/productionLine.cpp"

int main() {
    srand(time(NULL));
    productionLine line;
    line.runProductionLine();
    return 0;
}
