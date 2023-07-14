/*Given an array of integers, find once occured element
  i/p {1,2,3,4,1,2,3}.
  o/p 4 */

#include<stdio.h>
int main()
{
	int n;
	printf("enter array size elements\n");
	scanf("%d",&n);
	int arr[n],i=0,j=0,c=0;
	printf("enter array elemnets\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}    
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				c++;
			}
		}
		if(c==1)
		{
			printf("single occurenec is: %d",arr[i]);
		}
		c=0;
	}
}

