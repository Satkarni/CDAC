#include "tNode.h"

template <class T>
tNode<T>::tNode()
{
    left = NULL;
    right = NULL;
}


template <class T>
tNode<T>::~tNode()
{

}

template <class T>
void tNode<T>::setData(T ele)
{
    data = ele;
}

template <class T>
T tNode<T>::getData()
{
    return data;
}

template <class T>
void tNode<T>::setLeft(tNode<T> *tmp)
{
    left = tmp;
}
template <class T>
void tNode<T>::setRight(tNode<T> *tmp)
{
    right = tmp;
}
template <class T>
tNode<T>* tNode<T>::getLeft()
{
    return left;
}
template <class T>
tNode<T>* tNode<T>::getRight()
{
    return right;
}
