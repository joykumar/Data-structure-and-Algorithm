#include<stdio.h>

void fiboNacci(int n)
{
	int a,b,sum=0,i,t=0;
	printf("%4d %4d",a=0,b=1);
	for(i=0 ; i < n-2 ; i++)
	{
		sum=a+b;
		a=b;
		b=sum;
		printf("%4d",sum);
	}
}

int main()
{
	int n;
	printf("Enter no element in fibonacci series:\n");
	scanf("%d",&n);
	
	fiboNacci(n);
	
}
