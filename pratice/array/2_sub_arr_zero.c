/*Check if a subarray with 0 sum exists or not
Input:  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }
 
Output: Subarray with zero-sum exists
 
The subarrays with a sum of 0 are:
 
{ 3, 4, -7 }
{ 4, -7, 3 }
{ -7, 3, 1, 3 }
{ 3, 1, -4 }
{ 3, 1, 3, 1, -4, -2, -2 }
{ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }*/


#include<stdio.h>
int sum_function(int arr[],int n)
{
	int sum=0,i,j,a;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=arr[i]+arr[j];
			if(sum==0)
			{
				a=1;
				//printf("sub array with sum is zero is found\n");
			}
			sum=0;
		}
	}
	return a;
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
	int x=sum_function(arr,n);
	if(x==1)
		printf("sub array with sum is zero is found\n");
	else
		printf("not found\n");

}
