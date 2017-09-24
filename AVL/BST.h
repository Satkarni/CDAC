#include"TreeNode.cpp"
template<class T>
class  BST
{
	private: 
	TreeNode<T> *root;

	public:
	
	BST();~BST();
	void Insert(T  ele);
    void delNode(T key);
	static void InOrder(TreeNode<T>* temp);
	static void PreOrder(TreeNode<T>* temp);
	static void PostOrder(TreeNode<T>* temp);
	static void Delete(TreeNode<T>* temp);
	static TreeNode<T>* FindMin(TreeNode<T>* temp);
	static TreeNode<T>* FindMax(TreeNode<T>* temp);
	T GetNodeData();
	TreeNode<T>* GetRootNode();
	bool Search(T val);
	TreeNode<T>* getNode(T val);
	TreeNode<T>* getNodeParent(T val);
	static int  HeightOfTree(TreeNode<T>* temp);
};

