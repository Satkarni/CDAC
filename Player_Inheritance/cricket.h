#ifndef CRICKET_H
#define CRICKET_H
#include "problem5.h"

class Cricket:public Player
{
    private:
    int _runs;

    public:
    Cricket();

    Cricket(int runs);
   
    void Accept();
   
    void Display();

};

#endif
