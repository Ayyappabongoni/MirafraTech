#include<stdio.h>
void fun(int *p[],int i,int j);
int main()
{
	int arr[2][3]={{1,2,3},{4,5,6}};//empty index filled with 0
	int *p[2];
	p[0]=arr[0];
	p[1]=arr[1];
	int i=0,j=0;

	/*	for(i=0;i<2;i++)
		{
		for(j=0;j<3;j++)
		{
	//scanf("%d",(*(arr+i)+j));
	scanf("%d",&arr[i][j]);
	}
	}*/
	fun(p,2,3);
	printf("main\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d %p\n", *(*(p+i)+j), *(p+i)+j);
			//printf("%d %p",p[i][j],&p[i][j]);

		}
	}

}

void fun(int *p[],int i,int j)
{
	printf("function\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d %p\n", *(*(p+i)+j), *(p+i)+j);

		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			*(*(p+i)+j)=0;
		}
	}
}
