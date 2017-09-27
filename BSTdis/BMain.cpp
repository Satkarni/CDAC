#include"BST.cpp"
#include<iostream>
#include <cstdlib>
using namespace std;
int  main()
{
    int ch;
    int a;
    //char a;

    BST<int> objBST;
    //BST<char> objBST;


    do
    {
        system("clear");
        cout<<"\n1. Insert"
            <<"\n2. InOrder"
            <<"\n3. PreOrder"
            <<"\n4. PostOrder"
            <<"\n5. Height"
            <<"\n7. Delete a node"
            <<"\n8. Display"
            <<"\n6. Exit"
            <<"\n\nEnter Your Choice : ";
        cin>>ch;
        switch(ch)
        {

            case 1:
                cout<<"Enter an element : ";
                cin>>a;
                objBST.Insert(a);
                cin.get();
                break;
            case 7:
                cout<<"Enter key to delete\t";
                cin>>a;
                objBST.delNode(a);
                cin.get();
                break;
            case 2:
                BST<int>::InOrder(objBST.GetRootNode());
                cin.get();
                cin.get();
                break;
            case 3:
                BST<int>::PreOrder(objBST.GetRootNode());
                cin.get();
                cin.get();
                break;
            case 4:
                BST<int>::PostOrder(objBST.GetRootNode());
                cin.get();
                cin.get();
                break;
            case 5:	{
                        int height = BST<int>::HeightOfTree(objBST.GetRootNode());
                        cout<<"Height of tree:"<<height<<endl;
                        cin.get();
                    }
                    break;
            case 8:
                    BST<int>::display(objBST.GetRootNode());
                    cin.get();
                    cin.get();
                    break;
            default:cout<<"Invalid Choice";
                    cin.get();
        }
    }while(ch != 6);
}
