#include<stdio.h>
void function(int *p,int n)
{
	int i=0,j=0;
	int maxi=0;
	int mini=p[i];
	for(i=0;i<n;i++)
	{
		printf(" %d",p[i]);
	}
	for(i=0;i<n;i++)
	{
		if(p[i]>maxi)
		{
			maxi=p[i];//maxi
		}
		if(p[i]<mini)
		{
			mini=p[i];//mini
		}
	}
	printf("the maxi is (%d)\n the mini is (%d)\n",maxi,mini);

}
int main()
{
	int n;
	printf("enter array size\n");
	scanf("%d\n",&n);
	int arr[n];
	int i=0,j=0;
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	function(arr,n);
}

