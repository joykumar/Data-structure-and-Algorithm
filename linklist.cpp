#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

class ll
{
	private:
		Node *head;
	public:
		ll()
		{
			this->head=NULL;
		}
		~ll()
		{
			Node *temp=head;
			while(head)
			{
				head=head->next;
				delete(temp);
				temp=head;
			}
		}
		void InAtBeg(int x)
		{
			Node* temp=new Node();
			temp->data=x;
			temp->next=NULL;
			
			if(head==NULL)
			{
				head=temp;
				return;
			}
		
				temp->next=head;
				head=temp;
				
		
			
		}
		void Addbypos(int x,int pos)
		{
			
			Node* t=new Node();
			t->next=NULL;
			t->data=x;
			if(pos==1)
			{
				t->next=head;
				head=t;	
				return;
			}
			
			Node *temp=head;
			for(int i=0; i < pos-2 ; i++)
			{
				temp=temp->next;
			}
			t->next=temp->next;
			temp->next=t;
		
					
			
		}
		
		void Traversal()
		{
			Node* temp;
			temp=head;
			while(temp)
			{
				cout<<temp->data<<"->";
				temp=temp->next;
			}
		}
		int len()
		{
			int count=0;
			Node* temp=head;
			while(temp)
			{
				count+=1;
				temp=temp->next;
			}
			return count;
		}
		void Delete(int pos)
		{
		Node* temp=head;
			if(pos==1)
			{
				
				head=temp->next;
				
				
			}
			
			Node* temp1=head;
			Node* temp2=NULL;
			for(int i=0 ; i < pos-1  ; i++)
			{
				temp2=temp1;
				temp1=temp1->next;
			}
		
		temp2->next=temp1->next;
		temp1->next=NULL;
		delete(temp1);
		}
};


int main()
{
	ll link;
	link.Addbypos(7,1);
	link.Addbypos(8,1);
	link.Addbypos(9,2);
	link.Addbypos(10,4);
	link.Traversal();//8,9,7,10
	link.Delete(1);
	cout<<endl;
	link.Traversal();
	return 0;
}
