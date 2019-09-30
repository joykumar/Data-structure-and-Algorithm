#include<iostream>
#include<cmath>

using namespace std;

int main()

{
	int n;
	cin>>n;
	int i,j,k=3,m,count=0,t=n;
	for(i=1 ; i < n*2+2 ; i++)
	{
		if(i < ceil((n*2+2)/2)+1)
		{
	
			for(j=0 ; j < i ; j++)
			{
				cout<<k<<" ";
			}
			
			k++;
			cout<<endl;
			
		}
		
		else
		{
			
			if(count==0)
			{
			k=k-2;
			count=count+1;
			}
			else k--;
			for(j=t ; j > 0 ; j--)
			{
				cout<<k<<" ";
			}
			t--;
			cout<<endl;
			
		}
	}
}
/*
input=3
3
4 4
5 5 5
6 6 6 6
5 5 5
4 4
3

input-4
3
4 4
5 5 5
6 6 6 6
7 7 7 7 7
6 6 6 6
5 5 5
4 4
3
*/

