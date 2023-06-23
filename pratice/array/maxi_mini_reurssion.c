#include<stdio.h>

void function(int *p,int n,int i,int *maxi,int *mini)
{
	if(i>=n)
	{
		return;
	}
	if(p[i]>*maxi)
	{
		*maxi=p[i];//maxi
	}
	if(p[i]<*mini)
	{
		*mini=p[i];//mini
	}
	function(p,n,i+1,maxi,mini);

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
	int maxi=arr[0];
	int mini=arr[0];
	function(arr,n,0,&maxi,&mini);
	printf("maxi is %d\nmini is %d\n",maxi,mini);
}



