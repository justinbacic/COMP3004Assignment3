#ifndef ELEVATORCONTROLSYSTEM_H
#define ELEVATORCONTROLSYSTEM_H

#include <iostream>
#include <string>
#include <list>
#include <tuple>
#include <vector>
#include "elevator.h"
#include "floor.h"
//#include "BuildingSpecs.h"

class ElevatorControlSystem{
    private:
        int elevatorNum;
        int floorNum;
        list<Elevator> Elevators;
        list<Floor> Floors;
        vector<tuple<int, bool>> Requests;
    public:
        ElevatorControlSystem();
        ElevatorControlSystem(int elevators,int floors);
        void createElevators();
        void createFloors();
        void AssignRequest(int elevator);
        void AddRequest(int floor, bool direction);
        void RemoveRequest(int floor, bool direction);
        void Help(int elevator);
        void print();
};

#endif // ELEVATORCONTROLSYSTEM_H
