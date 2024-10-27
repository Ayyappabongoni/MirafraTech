#include<stdio.h>
int function(int (*p)[]);

int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,20};
	int (*p)[10]=&arr;//ptr to any array

	int (*p1)(int (*)[])=&function;//fun ptr

	printf("\nreturn : %d", (*p1)(p));
	printf("\nafter retrun from fun:\n");	
	for(int i=0;i<10;i++)
	{
		printf("%d",(*p)[i]);
	}

}

int function(int (*p)[])
{

	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d",(*p)[i]);
	}

	printf("eter return values\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&((*p)[i]));// or &(*p)[i]
	}
	return 0; 

}
