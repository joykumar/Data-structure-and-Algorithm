#include<bits/stdc++.h>

using namespace std;

class Node{
	public:
			int data;
			Node *next;
			Node *prev;
		};
		
class DLL
{
	private:
		Node *head;
		
	public:
		DLL();
		~DLL();
		void CreateNode(int x);
		int length();
		void Display();
		void Reverse();	
};

DLL::DLL()
{
	this->head=NULL;
}

DLL::~DLL()
{
	Node *temp=this->head;
	while(head)
	{
		
		this->head=this->head->next;
		delete temp;
		Node *temp=this->head;
	}
}

void DLL::CreateNode(int x)
{
	Node *t=this->head;
	Node *temp=new Node();
	temp->data=x;
	temp->next=NULL;
	temp->prev=NULL;
	if(head==NULL)
	{
		this->head=temp;
		
	}
	else
	{
		temp->next=this->head;
		this->head->prev=temp;
		this->head=temp;
	}
	
	
}

int DLL::length()
{
	int count=0;
	Node *t=this->head;
	while(t==NULL)
	{
		count++;
		t=t->next;
	}	
t=NULL;
delete t;	
return count;	
}



void DLL::Display()
{
	Node *p=this->head;
	while(p!=NULL)
	{
		cout<<p->data<<" -->";
		p=p->next;
	}
cout<<endl;
p=NULL;
delete p;
}


void DLL::Reverse()
{
	Node *t=this->head;
	while(t->next!=NULL)
	{
		t=t->next;
	}

	
	while(t!=NULL)
	{
		cout<<t->data<<"-->";
		t=t->prev;
	}

cout<<endl;
t=NULL;
delete t;	
}


int main()
{
	DLL l;
	int n,x;
	do
	{
		cout<<"Enter Your Choice::\n1.INSERT\n2.Display\n3.Reverse\n4.Exit"<<endl;
		cin>>n;
		cout<<endl;
		switch(n)
		{
			case 1:	cout<<"Enter the element you want to Insert"<<endl;
					cin>>x;
					l.CreateNode(x);
					break;
			case 2: l.Display();
					break;
					
			case 3: l.Reverse();
					break;
		
		
			default: cout<<"enter right choice"<<endl;		
		}
	}while(n!=4);
		

	
return 0;
}


