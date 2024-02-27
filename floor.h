#ifndef FLOOR_H
#define FLOOR_H

#include "button.h"
#include <QDebug>

class Floor{
    private:
        int floorNumber;
        Button upButton;
        Button downButton;
    public:
        Floor();
        Floor(int num);
        void sendRequest(bool direction);
        void print();
};

#endif // FLOOR_H
