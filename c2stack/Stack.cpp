#include "Stack.h"
//Constructor
template<class T>
Stack<T>::Stack()
{
	top = BOTTOM;
	top1 = (SIZE-1)/2;
    stackid = 0;
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
        if(id == 0)
        {
            top++;
            arr[top]= ele;
        }
        if(id == 1)
        {
            top1++;
            arr[top1]= ele;
        }
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
        if(id == 0)
        {
            elePopped = arr[top];
            top--;
        }
        if(id == 1)
        {
            elePopped = arr[top1];
            top1--;
        }
	}
	return elePopped;
}

//Function to check whether stack is empty
template<class T>
bool Stack<T>::IsEmpty(int id)
{
    if(id == 0)
        return (top == BOTTOM );
    if(id == 1)
        return (top1 == (SIZE-1)/2);

    return false;
}

//Function to check whether stack is full
template<class T>
bool Stack<T>::IsFull(int id)
{
    if(id == 0)
        return (top == (SIZE-1)/2);
    if(id == 1)
        return (top1 == SIZE-1);

    return false;
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
        if(id == 0)
            ele= arr[top];
        if(id == 1)
            ele = arr[top1];
	}
	return ele;
}
