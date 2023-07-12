/*Input:  { 2, 7, 9, 5, 1, 3, 5 }
 
Output: The maximum difference is 7.
 
The pair is (2, 9)*/

#include<stdio.h>
void function(int *p,int n)
{
	int i=0,j=0;
	int a,b;
	int c=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(c<p[i]-p[j])
			{
				c=p[i]-p[j];
				a=p[i];
				b=p[j];
			}
		}
	}
	printf("the maxi difference is %d\nwith (%d,%d)\n",c,a,b);
}

int main()
{
	int n;
	printf("enter array size\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements\n");
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	void (*p)(int *,int)=function;
	(*p)(arr,n);

}
