#ifndef FLOORBUTTON_H
#define FLOORBUTTON_H

#include "button.h"
class FloorButton: public Button{
    private:
        int floor;
    public:
        FloorButton();
        int getFloor();
};

#endif // FLOORBUTTON_H
