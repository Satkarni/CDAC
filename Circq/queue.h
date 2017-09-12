#include<iostream>
#include<stdexcept>
#define SIZE 5

using namespace std;
template<class T>

class CQue{


    private:
    T *arr;
    int front;
    int rear;

    public:
    CQue();
    bool Empty();
    bool Full();
    int size();
    bool Add(T a) throw(runtime_error);
    T Del() throw(runtime_error);
    ~CQue();
};
