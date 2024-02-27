#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <iostream>
#include <string>
#include <list>
#include "helpbutton.h"
#include "floorbutton.h"
#include "floorsensor.h"
#include "dooropenbutton.h"
#include "doorclosebutton.h"
#include "doorsensor.h"
#include "overloadsensor.h"
#include "speaker.h"
#include "display.h"
#include "phone.h"

#include <QDebug>
class Elevator{
    private:
        int Floors;
        int ID;
        int CurrentFloor;
        list<int> Requests;
        bool Idle;
        list<FloorButton> FloorButtons;
        HelpButton hb;
        FloorSensor fs;
        DoorOpenButton dob;
        DoorCloseButton dcb;
        DoorSensor ds;
        OverloadSensor os;
        Speaker s;
        Display d;
        Phone p;
    public:
        Elevator();
        Elevator(int id, int floors);
        void FufillRequest(int floor);
        void closeDoor();
        void openDoor();
        void moveUp();
        void moveDown();
        void Help();
        void FireAlarm();
        void PowerOutage();
        void InternalRequest(int floor);
        void GoIdle();
        void GoToSafeFloor();
        void print();
};
#endif // ELEVATOR_H
