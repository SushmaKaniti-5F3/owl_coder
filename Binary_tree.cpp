#include <algorithm>
#include <iostream>
#include <vector>

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

int main() {
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	return 0;
}