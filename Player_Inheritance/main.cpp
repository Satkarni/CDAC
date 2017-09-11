#include "problem5.h"
#include "cricket.h"
void SortbyAge(Player *p,int n)
{
    cout<<"List sorted by Age"<<endl;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(p[j].getage()>p[j+1].getage())
            {
                Player temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }

}

void SortbyName(Player *p,int n)
{   
    cout<<"\n"<<"List sorted by name"<<endl;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {

        
                    if((p[j].getname()).compare(p[j+1].getname())>0)
            {
                Player temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }



}



int main()
{

Player arr[size];

	int n;
	do
	{
		cout << "\n Enter num of players(1-100)\t" ;
		cin >> n;
	}while(n<0 && n>100);
	for(int i=0;i<n;i++)
	{
		arr[i].Accept();
	}

    cout<<"\n"<<endl;
	arr[0].Displaylist(arr);
   SortbyAge(arr,n);

	arr[0].Displaylist(arr);
   SortbyName(arr,n);

	arr[0].Displaylist(arr);

 Cricket c1,c2(25);
 c1.Accept();
 c2.Accept();
 c1.Display();
 c2.Display();
return 0;

}
