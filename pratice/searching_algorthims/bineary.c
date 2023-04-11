#include<stdio.h>
void sorting(int arr[],int size);
int binary(int arr[],int size,int target);
int main()
{
	int a,b;
	printf("enter the szie\n");
	scanf("%d",&a);
	int arr[a];
	int i=0;
	printf("enter the values\n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element to found\n");
	scanf("%d",&b);
	sorting(arr,a);
	printf("sorted array is \n");
	for(i=0;i<a;i++)
	{
		printf(" %d",arr[i]);
	}
	int c=binary(arr,a,b);
	if(c==-1)
	{
		printf("not found");
	}
	else
		printf("\nfound at %d",c);
}
int binary(int arr[],int size,int target)
{
	int r=size-1,l=0,mid;
	while(l<=r)
	{
		mid=l+r/2;

		if(target==arr[mid])
			return mid;
		if(target<arr[mid])
			r=mid-1;
		if(target>arr[mid])
			l=mid+1;
	}
	return -1;
}
void sorting(int arr[],int size)
{
	int i=0,j=0,temp;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

/*time complexity is
best case- o(1)
worst case is -  o(logn)  dividing the block every time in that case 

*/
