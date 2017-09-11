#include <iostream>
#include <string>
#include<stdexcept>
using namespace std;

#define SIZE 50
#define BOTTOM -1

template<class T,class T2>
class Stack
{
	private:
	T arr[SIZE];
	int top;

	public:
	Stack();
	bool Push(T);
	T Pop() throw(runtime_error);
    bool Popn(T2 *res,int n) throw(runtime_error);
	T Peep() throw(runtime_error);
	bool IsEmpty();
	bool IsFull();
};




