#include"Stack.cpp"
#include<cstdlib>
using namespace std;

void menu()
{
    cout<<"\n ******Menu******* :";
    cout<<"\n 1. Push.";
    cout<<"\n 2. Pop.";
    cout<<"\n 3. Peep.";
    cout<<"\n 4. Pop n items";
    cout<<"\n 5. Current size";
    cout<<"\n 6. Exit.";
}
int main()
{
	Stack<int,double> objStack;
	int iChoice =0;
	do
	{
        system("clear");
        menu();	
		cout<<"\n\n Enter your choice:\t";
		cin>>iChoice;
        //system("clear");
        cin.get();
		switch(iChoice)
		{
		case 1:
			{
			 int no;
			 cout<<"\n Enter NO:"<< "\t";
			 cin>>no;
			 if(!objStack.Push(no))			 
			   cout<<"\n Element not inserted may be stack is full\t";
			 }break;

		case 2:
			{
			int no;
			 try
			 {
				 no = objStack.Pop();
			     cout<<"\n Popped element :"<<no<<"\t";
			 }
			  catch(runtime_error e)
			  {
			    cout<<"\n"<<e.what() << "\t";
			  }
			 }break;
		case 3:
			{
			 int no;
			 try
			 {
				 no = objStack.Peep();
			     cout<<"\n Peeped element :"<<no << "\t";
			 }
			 catch(runtime_error e)
			 {
			   cout<<"\n"<<e.what()<< "\t";
			 }
			}break;
		case 4:
			{
                try
                {

                    double res[SIZE];
                    int n;
                    cout << "\nEnter num of elems to pop\t";
                    cin >> n;
                    if(objStack.Popn(res,n))
                    {
                        cout << endl;
                        for(int i=0;i<n;i++)
                            cout << res[i] << "\t";
                        cout <<"\t";        
                        cin.get();
                    }
                }
                catch(runtime_error e)
                {
                    cout << "\n"<<e.what() << "\t";
                        cin.get();
                }
                break;
			}
		case 5:
			{
					cout << "\nCurrent size:\t"<< objStack.sizeOf()<<"\t";
		    } break;
		case 6:
			{
					exit(0);
            }break;
        }
        cout << "\nPress enter to continue...";
        cin.get();
	}while(6 != iChoice);
	return 0;
}
