#include"LinkedList.h"
#include<iostream>
using namespace std;

    template <class T>
LinkedList<T>::LinkedList():count(0),head(NULL),tail(NULL)
{
}

    template <class T>
LinkedList<T>::~LinkedList()
{
    cout<<"\n Dtor called"<<endl;
    Node<T> *t =NULL;
    while(head != NULL)
    {
        t = head;
        head = head->GetNext();
        delete t;
    }
}


    template <class T>
int LinkedList<T>::size()
{
    return count;
}

    template <class T>
bool LinkedList<T>::empty()
{
    return (NULL == head && NULL == tail);
}

    template <class T>
bool LinkedList<T>::addAtBegin(T ele)
{
    bool bSuccess = false;
    Node<T> *t = new Node<T>;
    t->SetData(ele);	  

    if(empty())
    {		
        t->SetNext(NULL);
        t->SetPrev(NULL);
        head = t;
        tail = t;
        count++;
        bSuccess = true;
    }
    else
    {
        t->SetNext(head);
        t->SetPrev(NULL);
        head->SetPrev(t); 
        head = t;
        count++;
        bSuccess = true;
    }
    return bSuccess;
}

    template <class T>
bool LinkedList<T>::addAtEnd(T ele)
{
    bool bSuccess = false;
    Node<T> *t = new Node<T>;
    t->SetData(ele);	  

    if(empty())
    {		
        t->SetNext(NULL);
        t->SetPrev(NULL);
        head = t;
        tail = t;
        count++;
        bSuccess = true;
    }
    else
    {
        t->SetNext(NULL);
        t->SetPrev(tail);
        tail->SetNext(t);
        tail = t;
        count++;
        bSuccess = true;
    }
    return bSuccess;
}
    template <class T>
void LinkedList<T>::display()
{
    if(empty())
    {
        cout<<"\nNo items to display"<<endl;
        return;
    }
    cout<<"\n Linked List Contents"<<endl;
    cout<<"NULL---->";
    Node<T> *t = NULL;
    t= head;
    while(t !=NULL)
    {
        cout<<t->GetData()<<"---->";
        t= t->GetNext();
    }
    cout<<"NULL";

}

    template <class T>
void LinkedList<T>::rdisplay()
{
    if(empty())
    {
        cout<<"\nNo items to display"<<endl;
        return;
    }
    cout<<"\n Linked List Contents"<<endl;
    cout<<"NULL---->";
    Node<T> *t = NULL;
    t= tail;
    while(t !=NULL)
    {
        cout<<t->GetData()<<"---->";
        t= t->GetPrev();
    }
    cout<<"NULL";

}

    template <class T>
T LinkedList<T>::deleteFromBegin()
{ 
    T ele;
    if(!empty())
    {
        ele = head->GetData();
        Node<T> *t = head;
        if(head == tail)
        {
            tail = NULL;
            head = NULL;
            delete t;
            count--;
        }
        else
        {
            ele = head->GetData();
            head = head->GetNext();
            head->SetPrev(NULL);
            delete t;
            count--;

        }
    }
    return ele;

}

    template <class T>
T LinkedList<T>::deleteFromEnd()
{
    T ele;
    if(!empty())
    {
        ele = tail->GetData();
        Node<T> *t = tail;
        if(head == tail)
        {
            head = NULL;
            delete tail;
            tail= NULL;
            count--;
        }
        else
        {
            Node<T> *t =tail->GetPrev();
            t->SetNext(NULL);
            delete tail;
            count--;
            tail = t;
        }

    }
    return ele;
}

    template <class T>
bool LinkedList<T>::insertAt(int pos,T ele)
{
    bool bSuccess = false;
    if(count >=  pos-1)
    {

        Node<T> *p = head;
        Node<T> *q=head->GetNext();
        int no=0;
        while(no != pos-2)
        {
            p=p->GetNext();
            q=q->GetNext();
            no++;
        }
        Node<T> *temp = new Node<T>;
        temp->SetNext(q);
        q->SetPrev(temp);

        temp->SetData(ele); 

        p->SetNext(temp);
        temp->SetPrev(p);
        count++;
        bSuccess = true;
    }
    return bSuccess;
}

    template <class T>
bool LinkedList<T>::reverse()
{
    if(!empty())
    {
        Node<T> *swp =NULL; //for swapping
        Node<T> *tmp = head;
        while(tmp != NULL)
        {
           swp = tmp->GetPrev();
           tmp->SetPrev(tmp->GetNext());
           tmp->SetNext(swp);
           tmp = tmp->GetPrev();
        }
        swp = head;
        head = tail;
        tail = swp;
    }
    return true;
}
