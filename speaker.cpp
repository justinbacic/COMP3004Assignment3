#include "speaker.h"

Speaker::Speaker()
{

}
void Speaker::Off(){

}
void Speaker::Ring(){
     qInfo("Ring");
}
void Speaker::FireAlarm(){
     qInfo("Fire Alarm");
}
void Speaker::Overload(){
     qInfo("Overload");
}
void Speaker::PowerOutage(){
     qInfo("Power Outage");
}
void Speaker::BlockedDoor(){
    qInfo("Blocked Door");
}
