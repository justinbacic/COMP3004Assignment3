#ifndef DOORSENSOR_H
#define DOORSENSOR_H


class DoorSensor
{
    private:
        bool Obstructed;
    public:
        DoorSensor();
        void Obstruction();
        void Clear();
};

#endif // DOORSENSOR_H
