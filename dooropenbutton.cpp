#include "dooropenbutton.h"

DoorOpenButton::DoorOpenButton(){
    this->Held = false;
}
bool DoorOpenButton::getHeld(){
    return this->Held;
}
