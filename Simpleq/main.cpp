#include"queue.cpp"
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

int choice;
Que<int> objQueue;

do
{
cout<<"\n *********MENU************";
cout<<"\n 1. Add";
cout<<"\n 2. Del";
cout<<"\n 3. exit";
cout<<"\n Enter your choice:";
cin>>choice;
cin.get();

switch(choice)
{
case 1:	{
	int ele;
	cout<<"\n Enter element:";
	cin>>ele;
        try
        {
            objQueue.Add(ele);
        }
        catch(runtime_error e)
        {
            cout<<"\n"<<e.what()<<endl;
        }
        
    }break;

case 2:	{
		
		try{
		 int ele = objQueue.Del();
		 cout<<"\n Deleted element :"<<ele;
		}
		catch(runtime_error e)
		{
		cout<<"\n"<<e.what()<<endl;
		}
		
	}break;
case 3:{}break;
}
}while(3!=choice);

return 0;
}
