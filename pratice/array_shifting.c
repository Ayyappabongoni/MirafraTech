#include<stdio.h>
int main()
{
	int n,i=0,j=0,a;
	printf("enter shifts\n");
	scanf("%d",&n);
	printf("enter array size\n");
	scanf("%d",&a);
	int arr[a];
	printf("enter the data\n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}

	int temp[a];
	int c=0;

	for(i=0,j=a-1;i<n;i++,j--)
	{
		temp[i]=arr[j];
	}

/*	for(i=0;i<5;i++)
	{
		printf(" %d",temp[i]);
	}
	printf("\n");*/

	for(i,j=0;j<a-n;i++,j++)
	{
		temp[i]=arr[j];
	}

	printf("output\n");
	for(i=0;i<a;i++)
	{
		printf(" %d",temp[i]);
	}
}
