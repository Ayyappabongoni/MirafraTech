#include<stdio.h>
int fun(int *p[],int n);
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *p[10];
	int i;
	for(i=0;i<10;i++)
	{
		p[i]=&arr[i];
	}
	//fun(p,10);
	for(i=0;i<10;i++)
	{
		printf(" %d\n",*p[i]);
	}
}

int fun(int *p[],int n)
{
	int i=0;
	for(i=0;i<10;i++)
	{
		*p[i]=0;
	}
}

/*
scanf("%d",((*ptr)+i));
scanf("%d",(*ptr)+i);
*/
