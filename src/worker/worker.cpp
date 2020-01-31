#include "worker.h"
#include<iostream>
using namespace std;

int worker::idCounter=0;

worker::worker(){
    this->id = ++idCounter;
}

worker::takeItem(beltSlotItem item){
    this->itemsInHands.push_back(item);
}