//Fibonacci Series

#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,n,c=0;
	cin>>n;
	
	cout<<a<<" "<<b;
	for(int i=0 ; i < n-2 ; i++)
	{
		c=a+b;
		cout<<" "<<c;
		a=b;
		b=c;
		
	}
	
	
	
	return 0;
}
