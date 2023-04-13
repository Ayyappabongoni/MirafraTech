#include<stdio.h>
#include<stdlib.h>
int  sorting(int *p,int n);
//int swap(int p,int q);
int main()
{
	int n,i;
	printf("enter the size\n");
	scanf("%d",&n);
	int *p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	int (*fptr)(int *,int)=sorting;
	(*fptr)(p,n);

	for(i=0;i<n;i++)
	{
		printf("%d\n",p[i]);
	}
}

int sorting(int *p,int n)
{
	int i,j;
	int temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)//removing last sorted index
		{
			if(p[j]>p[j+1])
			{
				//swap(p[j],p[j+1]);
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
}

/*int swap(int p,int q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
}*/
