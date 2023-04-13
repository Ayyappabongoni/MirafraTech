/*
worst case -  o(n2) because two loops should go from 1 to n
best case - o(n)//if arr given is already sorted
*/

#include<stdio.h>
void insertion(int arr[],int n);
int main()
{
	int n,i=0;
	printf("enter size\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion(arr,n);
	printf("sorted values are:");
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}

}

void insertion(int arr[],int n)
{
	int i,j,temp;
	for(i=1;i<=n;i++)
	{
		temp=arr[i];
		j=i-1;//assign last sorted index

		while(j>=0&&arr[j]>temp)
		{
			arr[j+1]=arr[j];//moving greater elenent by i index
			j--;
		}
		arr[j+1]=temp;//if element is less then temp then store before it
	}
}
