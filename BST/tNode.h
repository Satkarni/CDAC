#include <iostream>
using namespace std;

template <class T>
class tNode
{
    private :
        T data;
        tNode<T> *left;
        tNode<T> *right;

    public :
        tNode();
        ~tNode();
        void setData(T ele);
        T getData();
        void setLeft(tNode *tmp);
        tNode *getLeft();
        void setRight(tNode *tmp);
        tNode *getRight();

};
