#include "queue.h"
using namespace std;

    template<class T>
CQue<T>::CQue():front(0),rear(0),old_rear(0)
{
    arr = new T[SIZE];
}

    template<class T>
CQue<T>::~CQue()
{
    delete []arr;
}

    template<class T>
int CQue<T>::getFront()
{
    return front;
}
    template<class T>
int CQue<T>::getRear()
{
    return rear;
}
    template<class T>
int CQue<T>::getOldrear()
{
    return old_rear;
}

    template<class T>
int CQue<T>::size()
{
    int tmp = rear-front;
    tmp = (tmp>=0) ? tmp:SIZE+tmp;
    return tmp;
}
    template <class T>
T CQue<T>::getElem(int index)
{
    return arr[index];
}
    template<class T>
bool CQue<T>::Empty() 
{
    return (rear == old_rear && rear == front);
}

    template<class T>
bool CQue<T>::Full()
{
    return (front==(old_rear+1)%SIZE && rear != old_rear);
}


    template<class T>
bool CQue<T>::Add(T a) throw (runtime_error)
{
    bool success = false;
    if(!Full())
    {
        arr[rear]=a;
        old_rear = rear;
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
        arr[front] = 0;
        old_rear = rear;
        front=(front+1)%SIZE;
    }
    else
        throw runtime_error("Queue Empty");
    return ele;
}
