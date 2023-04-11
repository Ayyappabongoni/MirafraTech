#include<stdio.h>
void fun(int arr[][3][3],int i,int j,int k);
int main()
{
	int arr[2][3][3]={
		{ {1,2,3},{4,5,6},{7,8,9} },{  {10,11,12},{13,14,15},{16,17,18} } };
	int i=0,j=0,k=0;

	/*	for(i=0;i<2;i++)
		{
		for(j=0;j<3;j++)
		{
		for(k=0;k<3;k++)
		{
		scanf("%d",&arr[i][j][k]);
	//scanf("%d",*(*(arr+i)+j)+k);
	}
	}
	}
	 */
fun(arr,2,3,3);

	printf("values are\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				//printf("%d\n",*(*(*(arr+i)+j)+k));
				printf("%d\n",arr[i][j][k]);
			}
		}
	}
}

void fun(int arr[][3][3],int i,int j,int k)
{

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				//printf("%d\n",*(*(*(arr+i)+j)+k));
				printf("%d\n",arr[i][j][k]);
			}
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				*(*(*(arr+i)+j)+k)=0;//assign values to 0
			}
		}
	}
}
