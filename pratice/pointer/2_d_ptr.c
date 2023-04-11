#include<stdio.h>
void fun(int arr[][3],int i,int j);
int main()
{
	int arr[2][3];//={{1,2,3},{4,5,6}};//empty index filled with 0

	int i=0,j=0;

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			//scanf("%d",(*(arr+i)+j));
			scanf("%d",&arr[i][j]);
		}
	}
	fun(arr,2,3);
	printf("main\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			//printf("%d %p\n",*(*(arr+i)+j),((arr+i)+j));
			printf("%d %p\n",arr[i][j],&arr[i][j]);
		}
	}

	//	*(*(arr+1)+2)=0;
	//	printf("%d %p\n",*(*(arr+1)+2),((arr+1)+2));
}

void fun(int arr[][3],int i,int j)
{
	printf("function\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			//printf("%d %p\n",*(*(arr+i)+j),((arr+i)+j));
			printf("%d %p\n",arr[i][j],&arr[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			//arr[i][j]=0;
			*(*(arr+i)+j)=0;
		}
	}
}
