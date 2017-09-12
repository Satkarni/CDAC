#include <iostream>
#include <string>
#include<stdexcept>
using namespace std;

#define SIZE 8 
#define BOTTOM -1

template<class T>
class Stack
{
	private:
        T arr[SIZE];
        int top[SIZE];
        int stackid;
        int div;
    
	public:
	Stack();
    void initTops();
	bool Push(T,int);
	T Pop(int) throw(runtime_error);
	T Peep(int) throw(runtime_error);
	bool IsEmpty(int);
	bool IsFull(int);
    void setdiv(int div)
    {
        if(div != 0)
        this->div = div;
    }
    void print()
    {
        for(int j=0;j<div;j++)
        {
            cout << "\nStack"<<j<<":\t" ;
            int min = j*(SIZE+1)/div;
            int max = (j+1)*(SIZE+1)/div;
            if(j == 0)
            {
                min = 0;
                max = (SIZE+1)/div;
            }
            if(j == div-1)
                max = SIZE;
            for(int i = min;i<max;i++)
            {
                cout << arr[i] << "\t" ;
            }
            cout << endl;
        }
    }
};




