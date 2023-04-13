/*
worst case o(n2)n square
best case o(nlogn)
*/

#include<stdio.h>
void quicksort(int arr[],int lb,int ub);
void swap(int *p,int *q);
int partition(int arr[],int lb,int ub);
int main()
{
	int n,i=0;
	printf("enter size\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quicksort(arr,0,n-1);
	printf("sorted values are:");
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}

}

void quicksort(int arr[],int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
		loc=partition(arr,lb,ub);
		quicksort(arr,lb,loc-1);
		quicksort(arr,loc+1,ub);
	}
}

int partition(int arr[],int lb,int ub)
{
	int pivot=arr[lb];
	int start=lb;
	int end=ub;

	while(start<end)
	{
		while(arr[start]<=pivot)
		{
			start++;
		}
		while(arr[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(&arr[start],&arr[end]);//swap start and end when upper loops stop
		}
	}
	swap(&arr[lb],&arr[end]);//swap pivot element with end element
	return end;
}

void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
