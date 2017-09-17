#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x;
    vector<int>vec;
    cout<<"Enter the number.Press 0 to exit"<<endl;
    cin>>x;
    do{
        vec.push_back(x);
        cin>>x;

    }while(x!=0);

    vector<int>::iterator first=vec.begin();
    vector<int>::iterator last=vec.end();
    
    while(first!=last)
    {
        cout<<*first++<<endl; 
       
    }
    

    return 0;

}
