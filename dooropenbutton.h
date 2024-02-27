#ifndef DOOROPENBUTTON_H
#define DOOROPENBUTTON_H

#include "button.h"


class DoorOpenButton: public Button{
    private:
        bool Held; //indicates whether or not the button is being held
    public:
        DoorOpenButton();
        bool getHeld();
};

#endif // DOOROPENBUTTON_H
