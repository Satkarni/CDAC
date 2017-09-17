#include "BST.h"
#include <queue>

    template <class T>
BST<T>::BST()
{
    root = NULL;
}

    template <class T>
BST<T>::~BST()
{
    deleteBST(root);
}


    template <class T>
tNode<T>* BST<T>::getRootNode()
{
    return root;
}
    template <class T>
void BST<T>::inOrder(tNode<T>* t)
{
    if(t != NULL)
    {
        inOrder(t->getLeft());
        cout << "\n" << t->getData() << endl;
        inOrder(t->getRight());
    }
}

    template <class T>
void BST<T>::preOrder(tNode<T>* t)
{
    if(t != NULL)
    {
        cout << "\n" << t->getData() << endl;
        preOrder(t->getLeft());
        preOrder(t->getRight());
    }
}

    template <class T>
void BST<T>::postOrder(tNode<T>* t)
{
    if(t != NULL)
    {
        postOrder(t->getLeft());
        postOrder(t->getRight());
        cout << "\n" << t->getData() << endl;
    }
}

    template <class T>
void BST<T>::display(tNode<T> *t)
{
    tNode<T> *tmp = NULL;
    queue<tNode<T> *> bag;
    bag.push(t);
    cout << endl;
    int level=1,popped=0;
    while(!bag.empty())
    {
        tmp = bag.front();
        if(tmp != NULL)
        {
            cout << bag.front()->getData()<< "\t";
            bag.push(tmp->getLeft());
            bag.push(tmp->getRight());
        }else
        {
            cout << -1 << "\t";
        }
        bag.pop();
        popped++;
        if(level == (1<<(popped-1)) )
        {
            popped = 0;
            level++;
            cout << "\n";
        }
    }
}

    template <class T>
void BST<T>::deleteBST(tNode<T>* t)
{
    if(t != NULL)
    {
        deleteBST(t->getLeft());
        deleteBST(t->getRight());
    }
    delete t; 
}


    template <class T>
void BST<T>::insert(T ele)
{
    tNode<T> *t = new tNode<T>;
    t->setData(ele);
    t->setLeft(NULL);
    t->setRight(NULL);
    if(root == NULL)
    {
        root = t;
    }else
    {

        tNode<T> *p = root;
        while(p != NULL)
        {
            if(ele == p->getData())
                throw runtime_error("Duplicate Value");
            if(ele < p->getData())
            {
                if(p->getLeft() == NULL)
                {
                    p->setLeft(t);
                    return;
                }else
                {
                    p = p->getLeft();
                }
            }
            if(ele > p->getData())
            {
                if(p->getRight() == NULL)
                {
                    p->setRight(t);
                    return;
                }else
                {
                    p = p->getRight();
                }
            }
        }
    }
}
    template <class T>
int BST<T>::heightOfTree(tNode<T> *t)
{
    int l = 0;
    int r = 0;

    if(t == NULL)
    {
        return 0;
    }

    l = heightOfTree(t->getLeft());
    r = heightOfTree(t->getRight());

    if(l>r || l == r)
    {
        return l+1;
    }else
    {
        return r+1;
    }

}
