//Print all subarrays with 0 sum

#include<stdio.h>
void sum_zero(int arr[],int n)
{
	int i,j,sum=0,c=0,x;
	for(i=0;i<n;i++)
	{
		x=i;//not lossing index value
		sum=0;
		for(j=i;j<n;j++)
		{
			sum+=arr[j];
			if(sum==0)
			{	c++;
				printf("sub arrays are\n");
				while(x<=j)
				{
					printf("%d",arr[x]);
					x++;
				}
				printf("\n");
			}
		}
	}
	if(c==0)
	{
		printf("no sub arrays are found\n");
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

	void (*fptr)(int*,int)=sum_zero;
	(*fptr)(arr,n);
}
