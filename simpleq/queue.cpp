#include "queue.h"
using namespace std;

template<class T>
Que<T>::Que():front(0),rear(0)
{

}

template<class T>
bool Que<T>::Empty()
{
    return (rear==front);
}

template<class T>
bool Que<T>::Full()
{
    return (rear==SIZE);
}

template<class T>
bool Que<T>::Add(T a) throw (runtime_error)
{
    bool success = false;
    if(!Full())
    {
        arr[rear]=a;
        rear=rear+1;
        success = true;
    }
    else
    throw runtime_error("Queue Full");

    return success;
}

template<class T>
T Que<T>::Del() throw(runtime_error)
{
    T ele;
    if(!Empty())
    {
        ele=arr[front];
        front=front+1;
    }
    else
        throw runtime_error("Queue Empty");
    return ele;
}
