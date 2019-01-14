//Find out the Factorial of a Number
#include<stdio.h>

//Factorial using Recursion

int    Fact(int n)
{
	if(n==0)
		return 1;
	
 	else{
	  return n*Fact(n-1); 
		}
	
}

//Using iteration
void Fact1(int n)
{
	int i;
	for(i=n-1 ; i > 0 ; i--)
	{
		n=n*i;
	}
}

int main()
{
	int n;
	printf("Enter a number for factorial :");
	scanf("%d",&n);
	//calling funtion any one of them
	Fact(n);
	printf("\n\nThe factorial of a number is :%d",Fact(n));//printing the funtion
	
	return 0;		
}
