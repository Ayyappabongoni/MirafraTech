#include<stdio.h>
int main()
{
	int n;
	printf("enter array size");
	scanf("%d",&n);
	int c=n;//store size value
	int arr[n],i=0,j=0;
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int a=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if( (arr[i]==arr[j]) && (i!=j) )//checking each index and indexs should not match
			{
				a=j;
				for(;a<n-1;a++)
				{
					arr[a]=arr[a+1];//shifting
				}
				n--;//decrement index
			}
		}
	}
	printf("output\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\nsize %d\n",n);
}

