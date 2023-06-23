#include<stdio.h>
#include<stdlib.h>
void intersection(int *p,int *q);
void union1(int *p,int *q);
void myremove(int *p,int i);
#define size 10
#define size2 10
int main()
{
	int array[size]={1,2,3,4,5,6,7,8,9,10};
	int array2[size2]={9,10,11,12,13,14,15,16,19,20};
	int i=0,j=0;
	intersection(array,array2);
	union1(array,array2);
}

void union1(int *p,int *q)
{
	int i=0,j=0;
	int temp[20];
	int a=0;
	for(i=0;i<10;i++)
	{
		temp[i]=p[i];//copy array1
	}
	for(i=i,j=0;j<10;i++,j++)
	{
		temp[i]=q[j];//copy arr2
	}
	printf("union\n");
	printf("before\n");
	for(i=0;i<20;i++){
		printf(" %d",temp[i]);
		a++;
	}
	printf("\n");
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			if(temp[i]==temp[j])
			{
				myremove(temp,j);//removing elements
				a=a-1;
				j--;
			}
		}
	}
	printf("after\n");
	for(i=0;i<a;i++)
	{
		printf(" %d",temp[i]);
	}
	printf("\n");
}

void intersection(int *p,int *q)
{
	int i=0,j=0;
	int l=0;
	int temp[2];
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(p[i]==q[j])
			{
				temp[l]=q[j];//copying dublicate
				l++;
			}
		}
	}
	printf("intersection\n");
	for(i=0;i<2;i++)
	{
		printf("%d",temp[i]);
	}
	printf("\n");
}


void myremove(int *p,int i)
{
	for(i;i<19;i++)
	{
		p[i]=p[i+1];
	}
}
