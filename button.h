#ifndef BUTTON_H
#define BUTTON_H


class Button{
    private:
        bool Pressed;
    public:
        Button();
        void LightOn();
        void LightOff();
        void InformPressed();
};

#endif // BUTTON_H
