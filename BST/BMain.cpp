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
            <<"\n7. Display"
            <<"\n6. Exit"
            <<"\n\nEnter Your Choice : ";
        cin>>ch;
        switch(ch)
        {

            case 1:
                cout<<"Enter an element : ";
                cin>>a;
                objBST.insert(a);
                break;
            case 2:
                BST<int>::inOrder(objBST.getRootNode());
                cin.get();
                cin.get();
                break;
            case 3:
                BST<int>::preOrder(objBST.getRootNode());
                cin.get();
                cin.get();
                break;
            case 4:
                BST<int>::postOrder(objBST.getRootNode());
                cin.get();
                cin.get();
                break;
            case 5:	{
                        int height = BST<int>::heightOfTree(objBST.getRootNode());
                        cout<<"Height of tree:"<<height<<endl;
                        cin.get();
                        cin.get();
                    }
                    break;
            case 6:

                cin.get();
                break;
            case 7:
                BST<int>::display(objBST.getRootNode());
                cin.get();
                cin.get();
                break;
            default:cout<<"Invalid Choice";
                    cin.get();
                    break;
        }
    }while(ch != 6);
    return 0;
}
