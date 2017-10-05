<<<<<<< Updated upstream
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
=======
#include"TreeNode.cpp"
template<class T>
class  BST
{
	private: 
	TreeNode<T> *root;

	public:
	
	BST();~BST();
	void Insert(T  ele);
	static void InOrder(TreeNode<T>* temp);
	static void PreOrder(TreeNode<T>* temp);
	static void PostOrder(TreeNode<T>* temp);
	static void Delete(TreeNode<T>* temp);
	static TreeNode<T>* FindMin(TreeNode<T>* temp);
	static TreeNode<T>* FindMax(TreeNode<T>* temp);
	T GetNodeData();
	TreeNode<T>* GetRootNode();
	bool Search(T val);
	static int  HeightOfTree(TreeNode<T>* temp);
};

>>>>>>> Stashed changes
