#include<stdio.h>


void second(int *p,int n)
{
	int temp[n];
	int temp2;
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(p[i]<p[j])
			{
				temp2=p[i];
				p[i]=p[j];
				p[j]=temp2;
			}
		}
	}
}

int main()
{
	int n;
	printf("enter size\n");
	scanf("%d",&n);

	int arr[n];
	printf("enter array elemnets\n");
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	second(arr,n);
	printf("array is\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");
	printf("the second largest elementr is %d\n",arr[1]);
	printf("\n");

}
