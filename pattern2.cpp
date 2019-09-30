#include<iostream>
using namespace std;

int main()
{
	int i,j,n,k=1,m=2;
	cin>>n;
	
	for(i=1 ; i < n ; i++)
	{
		if(i%2!=0)
		{
		
			for(j=1 ; j < n-1-1 ; j++)
			{
				cout<<k<<" ";
			}
			cout<<m;
			
			cout<<endl;
			k++;
			m++;
		}
		else
		{
		
			cout<<m<<" ";
			for(j=1 ; j < n-1-1 ; j++)
			{
				cout<<k<<" ";
			}
			
			cout<<endl;
			k++;
			m++;
			
		}
	}
	
	
	
	return 0;
}

/*
input=6
------------------------------
1 1 1 2
3 2 2 2
3 3 3 4
5 4 4 4
5 5 5 6

input=8
------------------------------
1 1 1 1 1 2
3 2 2 2 2 2
3 3 3 3 3 4
5 4 4 4 4 4
5 5 5 5 5 6
7 6 6 6 6 6
7 7 7 7 7 8

*/

