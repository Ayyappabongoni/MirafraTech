#include<stdio.h>

int main()
{
	int arr[5]={1,2,3,4,5};
	int *p[5];
	int i=0;

	for(i=0;i<5;i++)
	{
		p[i]=&arr[i];
	}

	for(i=0;i<5;i++)
	{
		printf("%d\n",*p[i]);
	}
}
