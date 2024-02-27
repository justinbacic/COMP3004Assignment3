#include "elevatorcontrolsystem.h"

ElevatorControlSystem::ElevatorControlSystem(){
    elevatorNum = 0;
    floorNum = 0;
    Elevators = {};
    Floors = {};
    Requests = {};
}
ElevatorControlSystem::ElevatorControlSystem(int elevators,int floors){
    elevatorNum = elevators;
    floorNum = floors;
    Elevators = {};
    Floors = {};
    Requests = {};
}
void ElevatorControlSystem::createElevators(){
    for(int i=0;i<elevatorNum;i++){
        Elevator e = Elevator(i+1,floorNum);
        Elevators.push_back(e);
    }
}
void ElevatorControlSystem::createFloors(){
    for(int i=0;i<floorNum;i++){
        Floor f = Floor(i+1);
        Floors.push_back(f);
    }
}
void ElevatorControlSystem::AssignRequest(int elevator){
        elevator++;
}
void ElevatorControlSystem::AddRequest(int floor, bool direction){
    Requests.push_back({floor,direction});
}
void ElevatorControlSystem::RemoveRequest(int floor, bool direction){
    direction = !direction;
    floor++;
    Requests.erase(Requests.begin());
}
void ElevatorControlSystem::Help(int elevator){
    elevator++;
}
void ElevatorControlSystem::print(){
    qInfo("Elevator control system");
    for(Floor f:Floors){
        f.print();
    }
    for(Elevator e:Elevators){
        e.print();
    }
}
