/*Find maximum length subarray having a given sum
nums[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 }
target = 8
Subarrays with sum 8 are
{ -5, 5, 3, 5 }
{ 3, 5 }
{ 5, 3 }
The longest subarray is { -5, 5, 3, 5 } having length 4*/

#include<stdio.h>
void lengthy_subarray(int arr[],int n,int target)
{
	int i=0,j=0,end,sum=0,x,length=0;
	for(i=0;i<n;i++)
	{
		sum=0;
		x=i;
		for(j=i;j<n;j++)
		{
			sum+=arr[j];
			if(sum==target)
			{
				printf("the sub array is \n");
				while(x<=j)
				{
					printf("%d",arr[x]);
					x++;
				}
				printf("\n");
				if(length<j-i+1){
					length=j-i+1;
					end=j;
				}
			}
		}
	}
	if(i==n&&j==n)
	{
		printf("the longest sub array is [%d %d]",end-length+1,end);
	}
}
int main()
{
	int n,i,target;
	printf("enter the size\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the target\n");
	scanf("%d",&target);
	void (*fptr)(int *,int,int)=lengthy_subarray;
	(*fptr)(arr,n,target);
}
