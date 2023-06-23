/*Find the maximum product of two integers in an array
Given an integer array, find the maximum product of two integers in it.

For example, consider array {-10, -3, 5, 6, -2}. The maximum product is the (-10, -3) or (5, 6) pair.*/


#include<stdio.h>
void maxim_product(int arr[],int n)
{
	int temp=0,i,j,product,a,b;
	for(i=0;i<n;i++)
	{
		temp=0;
		for(j=0;j<n;j++)
		{
			temp=arr[i]*arr[j];
			if(product < temp)
			{
				product=temp;
				a=arr[i];
				b=arr[j];
			}
		}
	}
	if(i==n&&j==n)
	{
		printf("the maximun product is in (%d,%d)\n",a,b);
	}
}
int main()
{
	int n,i;
	printf("enter the size\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	void (*fptr)(int*,int)=maxim_product;
	(*fptr)(arr,n);
}

