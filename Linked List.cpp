#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
};
void display(Node *head)
{
	Node *temp=head;
	while(temp)					//or while(temp->next!=NULL):- It only displays the data of a node if it has next node
	{							//o/p will be : 10 20, since there is no next for second node 30 won't be displayed
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main()
{
	Node *head=new Node();				//node1=head[0,null]
	Node *first=new Node();				//node2=first[0,null]
	Node *second=new Node();			//node3=second[0,null]

	//assign a data
	head->data=10;						//head[10,add1]
	first->data=20;						//first[20,null]
	second->data=30;					//second[30,null]

	//to connect two nodes;
	head->next=first;					//head[10,add1]->first[0,null]
	first->next=second;					//head[10,add1]->first[0,null]->second[0,null]
	display(head);
	return 0;
}