#include<stdio.h>
#include<stdlib.h>


void duplicate(int *a,int n)
{
	printf("duplicate values\n");
	int i=0,j=0,c=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
				c++;
		}
		if(c==2){
			printf("%d",a[i]);
			c=0;}
		c=0;
	}

}

void non_duplicate(int *a,int n)
{
	int i=0,j=0,c=0;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
		if(c==1){
			printf("%d",a[i]);
			c=0;}
		c=0;
	}

}
int main()
{
	int arr[8];
	int i=0,j=0;
	for(i=0;i<8;i++)
	{
		scanf("%d",&arr[i]);
	}
//	duplicate(arr,8);
non_duplicate(arr,8);
}

