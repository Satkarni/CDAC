#include <iostream>
#include <stdexcept>
#include "tNode.cpp"

using namespace std;

template <class T>
class BST
{
    private:
        tNode<T> *root;

    public:
        BST();
        ~BST();
        void insert(T ele);
        static void deleteBST(tNode<T>* t);
        static void inOrder(tNode<T>* t);
        static void preOrder(tNode<T>* t);
        static void postOrder(tNode<T>* t);
        tNode<T> *getRootNode();
        static int heightOfTree(tNode<T>* t);

        static void display(tNode<T>* t);
        
};
