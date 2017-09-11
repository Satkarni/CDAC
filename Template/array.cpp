#include "array.h"
#include "complexClass.h"

template <class T>
Array<T>::Array(int i)
{
    size = i;
    p = new T[size];
}


template <class T>
Array<T>::Array(const Array<T>& a)
{
    size = a.size;
    p = new T[size];

    for(int i=0;i<size;i++)
    {
        p[i] = a.p[i];
    }
}


template <class T>
Array<T>& Array<T>::operator=(const Array<T>& a)
{
    if(this == &a)
        return *this;
    if(size != a.size)
    {
        delete []p;
        size = a.size;
        p = new T[size];
    }
    for(int i=0;i<size;i++)
    {
        p[i] = a.p[i];
    }
    return *this;
}

template <class T>
void Array<T>::display()
{
    for(int i=0;i<size;i++)
        cout << "\n" << p[i];

    cout << endl;
}

template <class T>
void Array<T>::accept()
{
    cout << "\nPlease enter array element"<<endl;
    for(int i=0;i<size;i++)
        cin >> p[i];

}

template <class T>
T& Array<T>::operator[](int index)
{
    if(index>=0 && index<size)
    {
        return p[index];
    }
    else
    {
        static T dummy;
        return dummy;
    }
}
template class Array<double>;
template class Array<int>;
template class Array<comp>;

