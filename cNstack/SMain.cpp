#include"Stack.cpp"
#include<cstdlib>
using namespace std;

int main()
{
	Stack<int> objStack;
	int iChoice =0;
    int divs = 1;
    system("clear");
    cout << "\nEnter number of stack subdivisions:\t";
    cin >> divs;
    objStack.setdivs(divs);

	do
	{
        system("clear");
		cout<<"\n ******Menu******* :";
		cout<<"\n 1. Push.";
		cout<<"\n 2. Pop.";
		cout<<"\n 3. Peep.";
		cout<<"\n 4. Exit.";
        objStack.print();
		cout<<"\n\n Enter your choice:";
		cin>>iChoice;

		switch(iChoice)
		{
		case 1:
			{
			 int no,id;
			 cout<<"\n Enter NO and id:";
			 cin>>no >> id;
             cin.get();
			 if(!objStack.Push(no,id))			 
			   cout<<"\n Element not inserted may be stack is full"<<endl;
               cin.get();
			 }break;

		case 2:
			{
			int no,id;
			 cout<<"\n Enter id:";
			 cin>> id;
             cin.get();
			 try
			 {
				 no = objStack.Pop(id);
			     cout<<"\n Popped element :"<<no;
             cin.get();
			 }
			  catch(runtime_error e)
			  {
			    cout<<"\n"<<e.what()<<endl;
             cin.get();
			  }
			 }break;
		case 3:
			{
			 int no,id;
			 cout<<"\n Enter id:";
			 cin>> id;
             cin.get();
			 try
			 {
				 no = objStack.Peep(id);
			     cout<<"\n Peeped element :"<<no;
             cin.get();
			 }
			 catch(runtime_error e)
			 {
			   cout<<"\n"<<e.what()<<endl;
             cin.get();
			 }
			}break;
		case 4:
			{
					exit(0);
			}
		}
	}while(4 != iChoice);
	return 0;
}
