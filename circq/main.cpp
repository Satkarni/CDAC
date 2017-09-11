#include"queue.cpp"
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

int choice;
CQue<int> objQueue;

do
{
system("clear");
cout<<"\n *********MENU************";
cout<<"\n 1. Add";
cout<<"\n 2. Del";
cout<<"\n 3. Current queue size";
cout<<"\n 4. exit";
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
            cin.get();
            cin.get();
        }
        
    }break;

case 2:	{
		
		try{
		 int ele = objQueue.Del();
		 cout<<"\n Deleted element :"<<ele;
            cin.get();
		}
		catch(runtime_error e)
		{
            cout<<"\n"<<e.what()<<endl;
            cin.get();
            cin.get();
		}
		
	}break;
case 3:
{
    cout << "\nCurrent size:\t"<<objQueue.size()<<"\t";
    cin.get();
}break;
case 4:{}break;
}
}while(4!=choice);
return 0;
}
