//Find the duplicate element in a limited range array

#include<stdio.h>
void dublicate(int arr[],int n)
{
	int i,j,x;
	for(i=0;i<n;i++)
	{
		x=arr[i];
		for(j=i+1;j<n;j++)
		{
			if(arr[j]==x)
			{
				printf("dublicate element is%d\n",arr[j]);
			}
		}
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

	void (*fptr)(int*,int)=dublicate;
	(*fptr)(arr,n);
}
