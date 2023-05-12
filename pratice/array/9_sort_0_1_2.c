/*Input:  { 0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0 }
 
Output: { 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2 }*/

#include<stdio.h>

void swap(int *p,int *q)
{
	int x;
	x=*p;
	*p=*q;
	*q=x;
}
void function(int arr[],int n)
{
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				swap(&arr[j],&arr[i]);
			}
		}
	}
}
int main()
{
	int n,i=0;
	printf("enter array size\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("before sorting the array\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");

	function(arr,n);
	printf("after sorting the array\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}
