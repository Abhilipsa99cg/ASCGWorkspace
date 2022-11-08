#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool searchBackward(int arr[], int index, int n)
{
	for(int i=index+1; i<n; i++)
	{
		if(arr[index] >= arr[i])
		{
			return false;
		}
	}
	return true;
}

bool searchForward(int arr[], int index, int n)
{
	for(int i=index-1; i>=0;i--)
	{
		if(arr[index] <= arr[i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	printf("Enter the number of element in array: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int m=-1;
	for(int i=1;i<n;i++)
	{
		if(searchBackward(arr,i,n)==false)
		{
			continue;
		}
		if(searchForward(arr,i,n)==false)
		{
			continue;
		}
		m=arr[i];
		break;
	}
	printf("%d",m);
	return 0;
}
