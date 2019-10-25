#include<iostream>
using namespace std;

void selectionSort(int *arr,int n)
{
	int temp=INT_MAX;
	int i=0,j=0,t=0;
	while(i < n)
	{
		
		while(j < n)
		{
			if (temp > arr[j])
			{
			
					temp=arr[j];
					t=j;
			}
			j+=1;  
		}
		j=j-1;
		swap(arr[t],arr[i]);
		temp=INT_MAX;
		i+=1;
		j=i;
		t=0;
	}
	
	for(i=0 ; i < n ; i++)
	{
		cout<<arr[i]<<" ";	
	}	
	
	
}


int main()
{
	int n=5;
	int arr[n]={8,9,1,5,0};
	selectionSort(arr,n);
	
	return 0;
}
