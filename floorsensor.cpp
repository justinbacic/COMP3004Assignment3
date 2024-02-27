#include "floorsensor.h"

FloorSensor::FloorSensor(){
    CurrentFloor = 1;
}
int FloorSensor::getFloor(){
    return CurrentFloor;
}
void FloorSensor::DetectFloor(){

}
