#include<stdio.h>

	void Bubble_sort(int arr[],int n)
	{
		int i,j,m;
		for(i=0 ; i < n-1 ; i++)
		{
			for(j=0 ; j <n-i ; j++)
			{
				if(arr[j]>arr[j+1])
				{
					m=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=m;
				}
			}
		}
	}
	
	void printElement(int arr[],int n)
	{
		int i;
		for(i=0 ; i < n ; i++)
		{
			printf("%5d",arr[i]);
		}
	}
	
	int main()
	{
		int n,i;
		printf("enter the no of array emement: \n");
		scanf("%d",&n);
		int arr[n];
		printf("Enter the array element :");
		for(i=0 ; i < n ; i++ )
		{
			scanf("%d",&arr[i]);
		}
		
		Bubble_sort(arr,n);
		printElement(arr,n);
		
		return 0;
	}
