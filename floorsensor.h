#ifndef FLOORSENSOR_H
#define FLOORSENSOR_H


class FloorSensor{
    private:
       int CurrentFloor;
   public:
       FloorSensor();
       int getFloor();
       void DetectFloor();
};

#endif // FLOORSENSOR_H
