#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *left;
	Node *right;
	Node(int n)
	{
		data=n;
		left=right=NULL;		
	}
};
void Inorder(Node *root)
{
	if(root==NULL)
	return;
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}
void Preorder(Node *root)
{
	if(root==NULL)
	return;
	cout<<root->data<<" ";
	Preorder(root->left);
	Preorder(root->right);
}
void Postorder(Node *root)
{
	if(root==NULL)
	return;
	Postorder(root->left);
	Postorder(root->right);
	cout<<root->data<<" ";
}
int main() {
	Node *root=new Node(2);
	root->left=new Node(3);
	root->right=new Node(4);
	root->left->left=new Node(5);
	root->left->right=new Node(6);
	root->right->left=new Node(7);
	cout<<"Inorder:";
	Inorder(root);
	cout<<"\nPreorder:";
	Preorder(root);
	cout<<"\nPostorder:";
	Postorder(root);
	return 0;
}