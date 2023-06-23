/*Find a pair with the given sum in an array
Input:
nums = [8, 7, 2, 5, 3, 1]
target = 10
 
Output:
Pair found (8, 2)
or
Pair found (7, 3)
 
Input:
nums = [5, 2, 6, 8, 1, 9]
target = 12
Output: Pair not found*/
#include<stdio.h>
void pair(int arr[],int size,int target)
{
	int i=0,j=0,c=0;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[i]+arr[j]==target)
			{
				c++;
				printf("the pair is %d %d\n",arr[i],arr[j]);
			}
		}
	}
	if(c==0)
	{
		printf("pair not found\n");
	}
}
int main()
{
	int n,i,j,target;
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
	pair(arr,n,target);
}
