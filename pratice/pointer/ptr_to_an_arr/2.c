#include<stdio.h>
void fun(int (*p)[],int n);
int main()
{
	int arr[5]={1,2,3,4,5};
	int *p=arr;
	int (*ptr)[5]=&arr;
	int i;
	for(i=0;i<5;i++)
	{
		printf(" %d",p[i]);//single ptr
	}
	fun(ptr,5);
	for(i=0;i<5;i++)
	{
		printf(" %d",(*ptr)[i]);//ptr to an array
	}
}

void fun(int (*p)[],int n)
{
	int i;
	for(i=0;i<5;i++)
	{
		(*p)[i]=0;
	}
}
