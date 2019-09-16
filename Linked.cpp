#include<iostream>

using namespace std;

class Node
{
	public:
		int data;
		Node *next;
		
};

class Linked
{
	private:
		Node *first;
	public:
		Linked(){this->first=NULL;}
		~Linked();
		int length();
		void Display();
		void Insert(int x,int pos);
};

Linked::~Linked()
{
	Node *p=first;
	while(first)
	{
		first=first->next;
		delete p;
		p=first;
	}
}
void Linked::Insert(int x,int pos)
{
	if(pos < 0 || pos > length())
		return;
	Node *temp=new Node;
	
	temp->next=NULL;
	temp->data=x;
	if(pos==0)
	{
		temp->next=this->first;
		this->first=temp;
			
	}
	else
	{
		Node *n=this->first;
		for(int i=0 ; i < pos-1 ; i++ )
		{
			n=n->next;
		}
		
		temp->next=n->next;
		n->next=temp;
		
		
		n=NULL;
		
		delete n;
	}

}

int Linked::length()
{
	Node *temp;
	int len=0;
	temp=this->first;
	while(temp)
	{
		
		
		temp=temp->next;
		len++;
	}
	temp=NULL;
	delete temp;
	return len;
}
void Linked::Display()
{
	Node *temp=this->first;
	while(temp)
	{
	cout<<"->"<<temp->data<< " ";
	temp=temp->next;
	}
cout<<endl;
}


int main()
{
	Linked l;
	int choice,n,k;
	do
	{
		
		cout<<"enter your choice:\n1->Insert(element,posion)\n2->Display"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<"\nenter element and position"<<endl;
					cin>>n;
					cin>>k;
					l.Insert(n,k);
					break;
			case 2: l.Display();
					break;
		}
	}while(choice > 0 || choice < 3);
	
	
	return 0;
}
