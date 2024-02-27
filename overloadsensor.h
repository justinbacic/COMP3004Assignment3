#ifndef OVERLOADSENSOR_H
#define OVERLOADSENSOR_H


class OverloadSensor{
    private:
        bool Overloaded;
    public:
        OverloadSensor();
        void IsOverloaded();
        void Clear();
};

#endif // OVERLOADSENSOR_H
