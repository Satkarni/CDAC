#include "cricket.h"

Cricket::Cricket()
{

    _runs=0;
}

Cricket::Cricket(int runs):Player(0,"","")
{
    _runs=runs;
}

void Cricket::Accept()
{
    Player::Accept();
    cout<<"\nEnter the Runs"<<endl;
    cin>>_runs;
  
}

void Cricket::Display()
{
    Player::Display();
    cout<<"\n Runs:"<<_runs<<endl;
}
