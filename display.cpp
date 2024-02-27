#include "display.h"

Display::Display()
{
    this->Content = "";
}
void Display::ChangeDisplay(QString content){
    this->Content = content;
}
