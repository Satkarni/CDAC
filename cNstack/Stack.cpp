#include "Stack.h"
//Constructor
template<class T>
Stack<T>::Stack()
{
    for(int i=0;i<SIZE;i++)
    {
        top[i] = 0;
    }
    stackid = 0;
}

template<class T>
void Stack<T>::initTops()
{
    for(int i=0;i<div;i++)
    {
        top[i] = ((i)*(SIZE-1)/div == 0) ? -1:i*(SIZE-1)/div;
    }
}
//Function to add element in stack
template<class T>
bool  Stack<T>::Push(T ele,int id)
{
  	if(IsFull(id))
	{
		return false;
	}
	else
	{
        top[id]++;
        arr[top[id]] = ele;
		return true;
	}

}

//Function to get element from stack
template<class T>
T Stack<T>::Pop(int id) throw(runtime_error)
{
	T elePopped ;
	if(IsEmpty(id))
	{
		throw runtime_error("Stack underflow");
	}
	else
	{
        elePopped = arr[top[id]];
        top[id]--;
	}
	return elePopped;
}

//Function to check whether stack is empty
template<class T>
bool Stack<T>::IsEmpty(int id)
{
    int bottom =(id==0) ? -1: id*(SIZE-1)/div;
    return (top[id] == bottom);
}

//Function to check whether stack is full
template<class T>
bool Stack<T>::IsFull(int id)
{
    return (top[id]== (id+1)*(SIZE-1)/div);
}

//Function to get elemnt at top of stack
template<class T>
T Stack<T>::Peep(int id) throw(runtime_error)
{
	T ele;
	if(IsEmpty(id))
	{
		throw runtime_error("Stack underflow");
	}
	else
	{
        ele = arr[top[id]];
	}
	return ele;
}
