#include "Stack.h"
//Constructor
template<class T,class T2>
Stack<T,T2>::Stack()
{
	top = BOTTOM;
}

//Function to add element in stack
template<class T,class T2>
bool  Stack<T,T2>::Push(T ele)
{
  	if(IsFull())
	{
		return false;
	}
	else
	{
		top++;
		arr[top] = ele;
		return true;
	}

}

//Function to get element from stack
template<class T,class T2>
T Stack<T,T2>::Pop() throw(runtime_error)
{
	T elePopped ;
	if(IsEmpty())
	{
		throw runtime_error("Stack underflow");
	}
	else
	{
		elePopped = arr[top];
		top--;
	}
	return elePopped;
}

//Function to check whether stack is empty
template<class T,class T2>
bool Stack<T,T2>::IsEmpty()
{
	return (top == BOTTOM);
}


//Function to check whether stack is full
template<class T,class T2>
bool Stack<T,T2>::IsFull()
{
	return (top == SIZE-1);
	
}

//Function to get elemnt at top of stack
template<class T,class T2>
T Stack<T,T2>::Peep() throw(runtime_error)
{
	T ele;
	if(IsEmpty())
	{
		throw runtime_error("Stack underflow");
	}
	else
	{
	ele= arr[top];
	}
	return ele;
}

template<class T,class T2>
bool Stack<T,T2>::Popn(T2 *res,int n) throw(runtime_error)
{
    int i=0;
    if(n>sizeOf())
        throw runtime_error("Multiple pop will lead to underflow");
    else
    {
        while(i<n )
        {
            if( IsEmpty())
                throw runtime_error("Stack underflow");
            else
            {
                res[i++]= arr[top];
                top--;
            }
        }
    } 
	return true;
}

template<class T,class T2>
int Stack<T,T2>::sizeOf()
{
	return (top+1);
}
