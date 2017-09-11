#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void usage()
{
    cout << "\nUsage: exe source dest" << endl;
}


int main(int argc,char* argv[],char* ev[])
{
    if(argc < 3)
    {
        usage();
        return -1;
    }

    ifstream fin(argv[1],ios::in|ios::binary);
    ofstream fout(argv[2],ios::out|ios::binary);
    if(!fin)
    {
        cout << "\nUnable to open file to read";
    }
    if(!fout)
    {
        cout << "\nUnable to open file to write";
    }
    string str;
    while(!fin.eof())
    {
        getline(fin,str);
        fout << str << endl;
    }
    
    fin.close();
    fout.close();
    
    return 0;
}
