#include <iostream>
#include <string>
#include<stdexcept>
using namespace std;

#define SIZE 5 
#define BOTTOM -1

template<class T>
class Stack
{
	private:
	T arr[SIZE];
	int top;
    int top1;
    int stackid;
	public:
	Stack();
	bool Push(T,int);
	T Pop(int) throw(runtime_error);
	T Peep(int) throw(runtime_error);
	bool IsEmpty(int);
	bool IsFull(int);
    void print()
    {
        cout << "\nStack1:\t" ;
        for(int i =0;i<(SIZE+1)/2;i++)
        {
            cout << arr[i] << "\t" ;
        }
        cout << "\nStack2:\t" ;
        for(int i =(SIZE+1)/2;i<SIZE;i++)
        {
            cout << arr[i] << "\t" ;
        }
        cout << endl;
    }
};




