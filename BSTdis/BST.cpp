#include"BST.h"
#include <queue>
#include<iostream>
#include<stdexcept>
using namespace std;
    template<class T>
BST<T>::BST()
{
    root = NULL;
}

    template<class T>
BST<T>::~BST()
{
    Delete(root);
}

    template<class T>
void BST<T>::Delete(TreeNode<T>* temp)
{
    if (temp != NULL) 
    {
        Delete(temp->GetLeft());
        Delete(temp->GetRight());
    }
    delete temp;
}

    template<class T>
void BST<T>::InOrder(TreeNode<T>* temp)
{
    if (temp != NULL) 
    {
        InOrder(temp->GetLeft());
        cout<<temp->GetData()<<"\t";
        InOrder(temp->GetRight());
    }
}

    template<class T>
void BST<T>::PreOrder(TreeNode<T>* temp)
{
    if (temp != NULL) 
    {
        cout<<temp->GetData()<<"\t";
        PreOrder(temp->GetLeft());
        PreOrder(temp->GetRight());
    }
}

    template<class T>
void BST<T>::PostOrder(TreeNode<T>* temp)
{
    if (temp != NULL) 
    {
        PostOrder(temp->GetLeft());
        PostOrder(temp->GetRight());
        cout<<temp->GetData()<<"\t";
    }
}
    template<class T>
TreeNode<T>* BST<T>::GetRootNode()
{
    return root;

}

    template<class T>
void BST<T>::Insert(T iData)
{
    TreeNode<T> *t  = new TreeNode<T>;
    t->SetLeft(NULL);
    t->SetData(iData);
    t->SetRight(NULL);

    if (root == NULL) 
    {
        root = t;
    }
    else 
    {
        TreeNode<T>* current = root;
        while (current != NULL)
        {
            if(iData == current->GetData())
            {
                throw runtime_error("Duplicate values");
            }
            if (iData < current->GetData()) 
            {
                // insert left
                if (current->GetLeft() == NULL) 
                {
                    current->SetLeft(t);
                    return;
                } 
                else 
                {
                    current = current->GetLeft();
                }

            }
            else 
            {
                // insert right
                if (current->GetRight() == NULL)
                {
                    current->SetRight(t);
                    return;
                } 
                else 
                {
                    current = current->GetRight();
                }
            }
        }
    }
}

    template<class T>
void BST<T>::delNode(T key)
{
    TreeNode<T> *ndel = getNode(key);
    TreeNode<T> *par;
    if(!ndel)
    {
        par = NULL;
    }else
    {
        par = getNodeParent(key);
    }
    TreeNode<T> *spar=NULL,*s=NULL,*c=NULL;
    if(!ndel)
    {
        cout << "\nNode not found\n";
        return;
    }else
    {
        if(ndel->GetLeft() != NULL && ndel->GetRight() != NULL) // has 2 children
        {
            spar = ndel;
            s = ndel->GetRight();
            while(s->GetLeft() != NULL) // find next inorder successor
            {
                spar = s;
                s = s->GetLeft();
            }
            ndel->SetData(s->GetData());
            ndel = s;
            par = spar;
        }
        if(ndel->GetLeft() != NULL)
            c = ndel->GetLeft();
        else
            c = ndel->GetRight();

        if(par==NULL)   //root node to be deleted;
        {
            root = c;
        }
        else if(ndel == par->GetLeft())
            par->SetLeft(c);
        else
            par->SetRight(c);
        delete ndel;
    }
}


    template <class T>
void BST<T>::display(TreeNode<T> *t)
{
    int popped=0,level=0;
    queue<TreeNode<T>*> q;
    if(t == NULL)
        return;
    else
    {
        cout << "\nLevel order traversal:\n";
        q.push(t);
        while(!q.empty())
        {
            t = q.front();
            if(t != NULL)
            {
                q.push(t->GetLeft());
                q.push(t->GetRight());
                cout << t->GetData() << " ";
            }
            else
                cout << "_" << " ";
            q.pop();
            popped++;
            if(popped >= (1<<level))
            {
                popped = 0;
                level++;
                cout << endl;
            }
        }
    }
}


    template<class T>
bool BST<T>::Search(T val)
{
    TreeNode<T> *temp = root;

    while (temp != NULL) 
    {
        if (val == temp->GetData()) 
        {
            return true;
        } 
        else if (val < temp->GetData())
        {
            temp = temp->GetLeft();   
        } 
        else
        {
            temp = temp->GetRight();
        }
    } 

    return false;
}
    template<class T>
TreeNode<T>* BST<T>::getNode(T val)
{
    TreeNode<T> *temp = root;

    while (temp != NULL) 
    {
        if (val == temp->GetData()) 
        {
            return temp;
        } 
        else if (val < temp->GetData())
        {
            temp = temp->GetLeft();   
        } 
        else
        {
            temp = temp->GetRight();
        }
    } 

    return NULL;
}
    template<class T>
TreeNode<T>* BST<T>::getNodeParent(T val)
{
    TreeNode<T> *temp = root;
    TreeNode<T> *lchild=NULL,*rchild=NULL;
    if(temp != NULL)
    {
        lchild = temp->GetLeft();
        rchild = temp->GetRight();
    }
    while(!(lchild == NULL && rchild == NULL))
    {
        T tmp1,tmp2;
        if(lchild != NULL) 
            tmp1 = lchild->GetData();
        if(rchild != NULL) 
            tmp2 = rchild->GetData();
        if(tmp1 == val || tmp2 == val)
            return temp;
        if (val < temp->GetData())
        {
            temp = temp->GetLeft();   
            lchild = temp->GetLeft();
            rchild = temp->GetRight();            
        } 
        else
        {
            temp = temp->GetRight();
            lchild = temp->GetLeft();
            rchild = temp->GetRight();            
        }
    }
    return NULL;
}


    template<class T>
TreeNode<T>* BST<T>::FindMin(TreeNode<T>* t)
{
    if(t == NULL || t->GetLeft() == NULL)
    {
        return t;
    }
    else
    {
        return FindMin(t->GetLeft());
    }
}


    template<class T>
TreeNode<T>* BST<T>::FindMax(TreeNode<T>* t)
{
    if(t==NULL || t->GetRight()==NULL)
    {
        return t;
    }
    else
    {
        return FindMax(t->GetRight());
    }
}

    template<class T>
int  BST<T>::HeightOfTree(TreeNode<T>*  temp)
{
    int l = 0;
    int r = 0;

    if(temp == NULL)
    {
        return 0;
    }

    l = HeightOfTree(temp->GetLeft());
    r = HeightOfTree(temp->GetRight());
    if( l > r || l == r)
    {
        return (l + 1);
    }
    else
    {
        return (r + 1);
    }
}

