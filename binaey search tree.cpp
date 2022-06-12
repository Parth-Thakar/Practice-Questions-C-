#include<iostream>
using namespace std;
class BST
{
	int data;
	BST *left, *right;

public:
	BST();
	BST(int);
	BST* Insert(BST*, int);
	void Inorder(BST*);
};
BST ::BST()
	: data(0)
	, left(NULL)
	, right(NULL)
{
}
BST ::BST(int value)
{
	data = value;
	left = right = NULL;
}
BST* BST ::Insert(BST* root, int value)
{
	if (!root)
	{
		
		return new BST(value);
	}

	if (value > root->data)
	{
		root->right = Insert(root->right, value);
	}
	else
	{
		root->left = Insert(root->left, value);
	}

	return root;
}

void BST ::Inorder(BST* root)
{
	if (!root) {
		return;
	}
	Inorder(root->left);
	cout << root->data << endl;
	Inorder(root->right);
}

int main()
{
	BST b, *root = NULL;
	int ch;
	while(true)
	{
	cout<<"enter your choice \n 1. for creating a tree \n 2. for the inorder 3. for postorder \n 4. for exit \n "<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			root = b.Insert(root, 50);
			b.Insert(root, 30);
			b.Insert(root, 20);
			b.Insert(root, 40);
			b.Insert(root, 70);
			b.Insert(root, 60);
			b.Insert(root, 80);
		break;
		case 2:
			b.Inorder(root);
			break;
		case 3:
			cout<<"doing postorder traversal :"<<endl;
			break;
		case 4:
			exit(false);
			break;
		default :
			cout<<"no such option available :"<<endl;
			break;	
	}
	
}
	
}


