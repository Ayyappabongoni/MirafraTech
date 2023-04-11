//Linear search is a simple searching algorithm that searches for an element in an array or a list sequentially.
//It starts from the first element of the array and compares each element with the target element until
//it finds a match or reaches the end of the array.

#include<stdio.h>
int linear(int arr[],int size,int target);
int main()
{
	int a,b;
	printf("size\n");
	scanf("%d",&a);
	int arr[a];
	int i;
	printf("enter the value\n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element to found\n");
	scanf("%d",&b);
	int c=linear(arr,a,b);
	if(c==a)
		printf("not found\n");
	else
		printf("found at %d\n",arr[c]);
}

int linear(int arr[],int size,int target)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]==target)
		{
			break;
		}
	}
		return i;
}

/* time complexity
worst case- o(a)
best case-  o(1)
average case- sum of all cases/no.of cases

1+2+3.....+n/n   (1+2+3.....+n=n(n+1)/2)
=n(n+1)/2/n
=n(n+1)/2(n)
=o(n+1/2)

*/
