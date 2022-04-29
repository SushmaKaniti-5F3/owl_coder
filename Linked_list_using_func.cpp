#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
};
Node *head=NULL;
void insertOp(int val)
{
	Node *newnode =new Node();
	newnode->data=val;
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	Node *curr=head;
	while(curr->next!=NULL)
	{
		curr=curr->next;
	}
	curr->next=newnode;
}
void display(Node *head)
{

	Node *temp=head;
	while(temp)				
	{							
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main()
{
	insertOp(10);
	insertOp(20);
	insertOp(30);
	display(head);
	return 0;
}