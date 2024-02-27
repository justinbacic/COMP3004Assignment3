#include "floor.h"

Floor::Floor(){
    upButton = Button();
    downButton = Button();
}
Floor::Floor(int num){
    floorNumber = num;
    upButton = Button();
    downButton = Button();
}
void Floor::sendRequest(bool direction){
    !direction;
}
void Floor::print(){
    qInfo()<<"Floor"<<floorNumber;
}
