/*
	This program creates a doubly-linked list.
	Through a menu, then nodes can be added at the beginning or end or before/after a specific node.
	Also, any specific node in between or in the beginning or at the end can be deleted.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

struct dll
{
	int data;
	struct dll* left;
	struct dll* right;
}*s;

void create()
{
	int n, data, i;
	struct dll *Node, *p;

	cout << "Enter size of linked-list : ";
	cin >> n;

	s = (struct dll*)malloc(sizeof(struct dll));

	if(s == NULL)
	{
		cout << "Memory could not be located for the linked list!!!";
	}
	else
	{
		cout << "\tData at node 1 : ";
		cin >> s->data;
		s->left = NULL;
		s->right = NULL;

		p = s;

		for(i=2; i<=n; i++)
		{
			Node = (struct dll*)malloc(sizeof(struct dll));
			if(Node == NULL)
			{
				cout << "Memory could not be located to this node!!!!";
				break;
			}
			else
			{
				cout << "\tData at Node " << i << " : ";
				cin >> Node->data;
				Node->right = NULL;
				Node->left = p;
				p->right = Node;
				p = p->right;
			}
		}

		cout << "Doubly Linked List Created!!!\n\n";
	}
}

void disp()
{
	struct dll* p;
	cout << "Doubly Linked List :\n";
	if(s==NULL)
	{
		cout << "Empty Doubly Linked List!!!\n";
	}
	else
	{
		p = s;
		for(int i=1; p!=NULL; i++)
		{
			cout << "\t" << i << ". " << p->data << endl;
			p = p->right;
		}
	}
}

bool insertBefore(int x, int data)
{
	bool flag = false;
	struct dll *p = s, *q;
	q = (struct dll*)malloc(sizeof(struct dll));
	q->data = data;
	
	while(p!=NULL)
	{
		if(p->data==x)
		{
			q->right = p;
			q->left = p->left;
			if(p->left!=NULL)
			{
				p->left->right = q;
			}
			p->left = q;
			cout << "\nInserted a node before " << x << "...\n";
			flag = true;
			break;
		}
		else
		{
			p = p->right;
		}
	}
	return flag;
}

bool insertAfter(int x, int data)
{
	bool flag = false;
	struct dll *p = s, *q;
	q = (struct dll*)malloc(sizeof(struct dll));
	q->data = data;
	
	while(p!=NULL)
	{
		if(p->data==x)
		{
			q->right = p->right;
			q->left = p;
			if(p->right!=NULL)
			{
				p->right->left = q;
			}
			p->right = q;
			cout << "\nInserted a node after " << x << "...\n";
			flag = true;
			break;
		}
		else
		{
			p = p->right;
		}
	}
	return flag;
}

bool deletex(int data)
{
	bool flag = false;
	struct dll *p = s;
	if(s!=NULL)
	{
		while(p!=NULL)
		{
			if(p->data==data)
			{
				p->left->right = p->right;
				p->right->left = p->left;
				cout << "\nDeleted a node with value = " << data << "...\n";
				flag = true;
				break;
			}
			else
			{
				p = p->right;
			}
		}
	}
	else
	{
		cout << "Empty List!!!\n";
	}
	return flag;
}

void deleteFirstNode()
{
	if(s!=NULL)
	{
		s = s->right;
		s->left = NULL;
		cout << "\nDeleted the first node...\n";
	}
	else
	{
		cout << "Empty List!!!\n";
	}
}

void deleteLastNode()
{
	struct dll *p=s;
	if(s!=NULL)
	{
		while(p->right->right!=NULL)
		{
			p = p->right;
		}
		p->right = NULL;
		cout << "\nDeleted the last node...\n";
	}
	else
	{
		cout << "Empty List!!!\n";
	}
}

int main()
{
	int choice, x, data;
	create();
	
	while(1)
	{
		cout << "\n\n\tM  E  N  U\n1. Insert a node before a specific node\n2. Insert a node after a specific node\n3. Delete a specific value\n4. Delete the first node\n5. Delete the last node : ";
		cin >> choice;

		switch(choice)
		{
			case 1 :
				cout << "Enter a number of the list : ";
				cin >> x;
				cout << "Enter data to be put before the first occurence of " << x << " : ";
				cin >> data;
				if(insertBefore(x,data))
					cout << "Inserted!!\n";
				else
					cout << x << " not found\n";
				disp();
				break;

			case 2 :
				cout << "Enter a number of the list : ";
				cin >> x;
				cout << "Enter data to be put after the first occurence of " << x << " : ";
				cin >> data;
				if(insertAfter(x,data))
					cout << "Inserted!!\n";
				else
					cout << x << " not found\n";
				disp();
				break;

			case 3 :
				cout << "Enter a number of the list : ";
				cin >> x;
				if(deletex(x))
					cout << "Deleted " << x << "!!\n";
				else
					cout << x << " not found\n";
				disp();
				break;

			case 4 :
				deleteFirstNode();
				disp();
				break;

			case 5 :
				deleteLastNode();
				disp();
				break;

			default :
				break;
		}
	}
	return 0;
}
