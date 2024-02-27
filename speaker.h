#ifndef SPEAKER_H
#define SPEAKER_H
#include <QDebug>

class Speaker{
    public:
        Speaker();
        void Off();
        void Ring();
        void FireAlarm();
        void Overload();
        void PowerOutage();
        void BlockedDoor();
};

#endif // SPEAKER_H
