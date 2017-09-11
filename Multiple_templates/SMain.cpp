#include"Stack.cpp"
#include<cstdlib>
using namespace std;

int main()
{
	Stack<int,double> objStack;
	int iChoice =0;
	do
	{
		cout<<"\n ******Menu******* :";
		cout<<"\n 1. Push.";
		cout<<"\n 2. Pop.";
		cout<<"\n 3. Peep.";
        cout<<"\n 4. Pop n items";
		cout<<"\n 5. Exit.";
	
		cout<<"\n\n Enter your choice:";
		cin>>iChoice;

		switch(iChoice)
		{
		case 1:
			{
			 int no;
			 cout<<"\n Enter NO:";
			 cin>>no;
			 if(!objStack.Push(no))			 
			   cout<<"\n Element not inserted may be stack is full"<<endl;
			 }break;

		case 2:
			{
			int no;
			 try
			 {
				 no = objStack.Pop();
			     cout<<"\n Popped element :"<<no;
			 }
			  catch(runtime_error e)
			  {
			    cout<<"\n"<<e.what()<<endl;
			  }
			 }break;
		case 3:
			{
			 int no;
			 try
			 {
				 no = objStack.Peep();
			     cout<<"\n Peeped element :"<<no;
			 }
			 catch(runtime_error e)
			 {
			   cout<<"\n"<<e.what()<<endl;
			 }
			}break;
		case 4:
			{
                double res[SIZE];
				if(objStack.Popn(res,3))
                {
                    cout << endl;
                    for(int i=0;i<3;i++)
                        cout << "\t"<<res[i];
                    cout << endl;        
                }
                break;
			}
		case 5:
			{
					exit(0);
		    }
        }
	}while(5 != iChoice);
	return 0;
}
