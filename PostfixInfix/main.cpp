#include <iostream> 
#include <stack>
using namespace std; 

string getInput()
{
    string in = "";
    cout << "\nPlease enter expression\n";
    getline(cin,in);
    return in;
}
int main() 
{
    stack<int> s;
    string in = getInput();
    cout << in;
    return 0; 
}
