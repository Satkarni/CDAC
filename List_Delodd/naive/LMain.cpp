#include"LinkedList.cpp"
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

    int choice;
    LinkedList<int> objList;

    do
    {
        system("clear");
        cout<<"\n *********MENU************";
        cout<<"\n 1. Add at beginning";
        cout<<"\n 2. Add at end";
        cout<<"\n 3. Delete from beginning";
        cout<<"\n 4. Delete from end";
        cout<<"\n 5. Insert at position";
        cout<<"\n 6. Reverse List";
        cout<<"\n 7. Check for empty";
        cout<<"\n 8. Get size";
        cout<<"\n 9. Display";
        cout<<"\n 11.Delete odd nodes";
        cout<<"\n 10. Exit";
        cout<<"\n Enter your choice:";
        cin>>choice;
        cin.get();

        switch(choice)
        {
            case 1:	{
                        int ele;
                        cout<<"\n Enter element:";
                        cin>>ele;
                        if(!objList.addAtBegin(ele)){
                            cout<<"\n Insertion Failed";
                            cin.get();

                        }
                        else{
                            cout<<"\nInsertion succeded";
                            cin.get();

                        }
                    }break;

            case 2:	{
                        int ele;
                        cout<<"\n Enter element:";
                        cin>>ele;
                        if(!objList.addAtEnd(ele)){
                            cout<<"\n Insertion Failed";
                            cin.get();

                        }
                        else{
                            cout<<"\nInsertion succeded";
                            cin.get();

                        }
                    }break;

            case 3:	{
                        int no = objList.deleteFromBegin();
                        cout<<"\nDeleted Element:"<<no;;
                        cin.get();
                    }break;
            case 4:	{
                        int no = objList.deleteFromEnd();
                        cout<<"\nDeleted Element:"<<no;
                        cin.get();
                    }break;
            case 5:	{
                        int pos;
                        cout<<"\n Enter position";
                        cin>>pos;
                        int ele;
                        cout<<"\n Enter element:";
                        cin>>ele;
                        if(!objList.insertAt(pos,ele)){
                            cout<<"\nInsertion failed, may be insufficient size";
                            cin.get();

                        }
                        else{
                            cout<<"\nInsertion succeded";
                            cin.get();

                        }
                    }break;
            case 6:	{
                        if(!objList.reverse())
                        {
                            cout<<"\nReverse opeartion failed";
                            cin.get();

                        }
                        else{
                            cout<<"\n List reversed";
                            cin.get();

                        }
                    }break;
            case 7: {
                        if(objList.empty()){
                            cout<<"\n List is empty";
                            cin.get();
                        }
                        else{
                            cout<<"\n List is not empty";
                            cin.get();

                        }
                    }break;
            case 8: {
                        cout<<"\n Size ="<<objList.size();
                        cin.get();
                    }break;
            case 9: {
                        objList.display();
                        cin.get();
                    }break;
            case 10:{}break;
            case 11: {
                        objList.display();
                        cout << "\nDeleting odd nodes\t";
                        objList.deleteOdd();
                        objList.display();
                        cin.get();
                    }break;
        }
    }while(10 != choice);

    return 0;
}
