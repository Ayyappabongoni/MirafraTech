/*
best and worst case is o(n2)//n square
because of two loops
*/

#include<stdio.h>
void swap(int *p,int *q);
void selection(int arr[],int n);
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
	selection(arr,n);
	printf("sorted values are:");
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}

}
void selection(int arr[],int n)
{

	int i,j,temp;
	for(i=0;i<n-1;i++)//n-1 passes
	{
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(i!=min)
		{
			swap(&arr[i],&arr[min]);
/*			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
*/
		}
	}
}

void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}

