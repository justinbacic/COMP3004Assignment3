#ifndef PHONE_H
#define PHONE_H
#include <string>
#include<QDebug>
using namespace std;
class Phone{
    private:
        bool On;
    public:
        Phone();
        void MakeCall(string target);
        bool Connected();
        bool Timeout();

};

#endif // PHONE_H
