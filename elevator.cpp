#include "elevator.h"

Elevator::Elevator(){
    ID = 1;
    Floors = 1;
    CurrentFloor = 1;
    Requests = {};
    Idle = true;
    FloorButtons = {};
    hb = HelpButton();
    fs = FloorSensor();
    dob = DoorOpenButton();
    dcb = DoorCloseButton();
    ds = DoorSensor();
    os = OverloadSensor();
    s = Speaker();
    d = Display();
    p = Phone();
}
Elevator::Elevator(int id, int floors){
    ID = id;
    Floors = floors;
    CurrentFloor = 1;
    Requests = {};
    Idle = true;
    FloorButtons = {};
    hb = HelpButton();
    fs = FloorSensor();
    dob = DoorOpenButton();
    dcb = DoorCloseButton();
    ds = DoorSensor();
    os = OverloadSensor();
    s = Speaker();
    d = Display();
    p = Phone();
}
void Elevator::FufillRequest(int floor){
    Requests.remove(floor);
}
void Elevator::closeDoor(){

}
void Elevator::openDoor(){

}
void Elevator::moveUp(){
    if(CurrentFloor<Floors){
        CurrentFloor++;
    }
}
void Elevator::moveDown(){
    if(CurrentFloor>1){
        CurrentFloor--;
    }
}
void Elevator::Help(){

}
void Elevator::FireAlarm(){

}
void Elevator::PowerOutage(){

}
void Elevator::InternalRequest(int floor){
    Requests.push_back(floor);
}
void Elevator::GoIdle(){
    this->Idle = true;
}
void Elevator::GoToSafeFloor(){

}
void Elevator::print(){
    qInfo()<<"Elevator Number: "<<ID<<" on floor "<<CurrentFloor;
}
