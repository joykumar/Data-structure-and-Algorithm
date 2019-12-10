#include<iostream>
#include<queue>
using namespace std;

class Node
{
	public:
		int data;
		Node* left;
		Node* right;	
};

class Tree
{
	private:
		Node* root;
	public:
		Tree()
		{
			this->root=NULL;
			
		}
		void CreateTree();
		void Traverse(){Traverse(root);}
		void Traverse(Node* p);
		
		void BST(int k){BST(root,k);}
		void BST(Node* p,int k);
};
void Tree::CreateTree()
{
	queue<Node*> q;
	int x;
	this->root=new Node();
	this->root->left=root->right=NULL;
	cout<<"Enter root Node value";
	cin>>x;
	root->data=x;
	q.push(root);
	while(!q.empty())
	{
		Node* p=q.front();
		q.pop();
		
		int k;
		cout<<"enter left child value if present else -1:"<<endl;
		cin>>k;
		if(k!=-1)
		{
			Node* temp=new Node();
			temp->left=NULL;
			temp->right=NULL;
			temp->data=k;
			q.push(temp);
			p->left=temp;
			temp=NULL;	
		}
		else
		{
			p->left=NULL;
		}
		cout<<"enter right child value if present else -1:"<<endl;
		cin>>k;
		if(k!=-1)
		{
			Node* temp=new Node();
			temp->left=NULL;
			temp->right=NULL;
			temp->data=k;
			q.push(temp);
			p->right=temp;
			temp=NULL;	
		}else
		{
			p->right=NULL;
		}
				
	
		
	}
}
	void Tree:: Traverse(Node* temp)
	{
		if(temp)
		{
		
		cout<<temp->data<<" ";
		Traverse(temp->left);
		Traverse(temp->right);
		}
		
	}
	void Tree::BST(Node* temp,int k)
	{
		if(temp->data==k)
		{
			cout<<"key found";
			return;
		}
		else if(temp->data>k) 
		{
			BST(temp->left,k);
		}
		else if(temp->data<k)
		{
			BST(temp->right,k);
		}
		else return;
	}
	

int main()
{
	Tree t;
	t.CreateTree();
	t.Traverse();
	t.BST(10);
	return 0;
}
