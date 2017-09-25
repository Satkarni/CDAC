#include"BST.cpp"
#include<iostream>
#include <fstream>

using namespace std;

void usage()
{
    cout<<"\n1. Find max length word"
        <<"\n2. InOrder"
        <<"\n3. PreOrder"
        <<"\n4. PostOrder"
        <<"\n5. Height"
        <<"\n6. Exit"
        <<"\n\nEnter Your Choice : ";
}


void process(fstream& file)
{
    int ch;
    string a;

    BST<string> objBST;

    string tmp;
    while(!file.eof())
    {
        file >> tmp;
        if(file.eof()) break;        
        objBST.Insert(tmp);
    }     
    do
    {
        usage();
        cin>>ch;
        switch(ch)
        {

            case 1:
                cout << objBST.FindMax(objBST.GetRootNode())->GetData();
                break;
            case 2:
                BST<string>::InOrder(objBST.GetRootNode());
                break;
            case 3:
                BST<string>::PreOrder(objBST.GetRootNode());
                break;
            case 4:
                BST<string>::PostOrder(objBST.GetRootNode());
                break;
            case 5:	{
                        int height = BST<string>::HeightOfTree(objBST.GetRootNode());
                        cout<<"Height of tree:"<<height<<endl;
                    }
                    break;
            default:cout<<"Invalid Choice";
        }
    }while(ch != 6);
}

int  main()
{
    fstream file("in",ios::in);
    if(!file)
    {
        cout << "Failed to open input file"<<  endl;
    }else
    {
        process(file); 
    }
    file.close();
    return 0;
}
