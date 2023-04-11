#include<stdio.h>
int fun(int *p[],int r,int c);
int main()
{
	int arr[3][5]={{1,2,3,4,5},{0,0,0,0,0,},{1,1,1,1,1,}};

	int *p[3];//pointer of arrays
	int i,j;
	for(i=0;i<3;i++)
	{
		p[i]=arr[i];//address sign
	}
//	fun(p,3,5);
	for(i=0;i<3;i++)//rows
	{
		for(j=0;j<5;j++)//coloums
		{
			printf(" %d",p[i][j]);//*(*(p+i)+j)
		}
	}
	printf("size:%ld\n",sizeof(p));//single pointer 8bytes
}

int fun(int *p[],int r,int c)
{
int i,j;
	for(i=0;i<r;i++)//rows
	{
		for(j=0;j<c;j++)//coloums
		{
		   p[i][j]=0;
		}
	}
}
