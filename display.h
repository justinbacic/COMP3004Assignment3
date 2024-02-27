#ifndef DISPLAY_H
#define DISPLAY_H
#include <QString>


class Display{
    private:
        QString Content;
    public:
        Display();
        void ChangeDisplay(QString content);
};

#endif // DISPLAY_H
