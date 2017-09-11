#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>

using namespace std;

template <class T>
class Array
{
    private:
        int size;
        T *p;

    public:
        Array<T>(int i);
        Array<T>(const Array<T>& a);
        
        Array<T>& operator=(const Array<T>& a);
        T& operator[](int index);
        void display();
        void accept();
        
       
};

#endif
