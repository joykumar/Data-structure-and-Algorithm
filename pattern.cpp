#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k=1;
	cin>>n;
	for(int i=0; i< n ; i++)
	{
		if(i%2==0)
		{
		int count=0;
		for(j=0 ; j < i+1 ; j++,k++)
		{
			if(count==0)
			{
				cout<<k;
			}
			else{
			
				cout<<"*";
				cout<<k;
			}
			count++;
		}
			cout<<endl;
			
		}
		else
		{
			int t=k;
			int count=0;
			for(j=0,t=k+i ; j < i+1  ; j++,k++,t--)
			{
				if(count==0)
					cout<<t;
				else
				{
				
					cout<<"*";
					cout<<t;
				}
				count++;
			}
			cout<<endl;
				
		}
	}
	
	
	return 0;
}
