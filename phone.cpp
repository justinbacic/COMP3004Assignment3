#include "phone.h"

Phone::Phone(){
    On = true;
}
void Phone::MakeCall(string target){
    qInfo("Calling");
}
bool Phone::Connected(){
    return true;
}
bool Phone::Timeout(){
    return true;
}
