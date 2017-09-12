#include "queue.h"
using namespace std;

template<class T>
CQue<T>::CQue():front(0),rear(0)
{
   arr = new T[SIZE];
}

template<class T>
CQue<T>::~CQue()
{
    delete []arr;
}

template<class T>
bool CQue<T>::Empty() {
    
    return (rear==front);

}

template<class T>
bool CQue<T>::Full()
{
    return (front==(rear+1)%SIZE);
}

template<class T>
int CQue<T>::size()
{
    int tmp = rear-front;
    tmp = (tmp>0) ? tmp:SIZE+tmp;
    return tmp;
}

template<class T>
bool CQue<T>::Add(T a) throw (runtime_error)
{
    bool success = false;
    if(!Full())
    {
        arr[rear]=a;
        rear=(rear+1)%SIZE;
        success = true;
    }
    else
    throw runtime_error("Queue Full");

    return success;
}

template<class T>
T CQue<T>::Del() throw(runtime_error)
{
    T ele;
    if(!Empty())
    {
        ele=arr[front];
        front=(front+1)%SIZE;
    }
    else
        throw runtime_error("Queue Empty");
    return ele;
}
