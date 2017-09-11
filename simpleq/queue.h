#include<iostream>
#include<stdexcept>
#define SIZE 5

using namespace std;
template<class T>

class Que{

    private:
    T arr[SIZE];
    int front;
    int rear;

    public:
    Que();
    bool Empty();
    bool Full();
    bool Add(T a) throw(runtime_error);
    T Del() throw(runtime_error);

};
