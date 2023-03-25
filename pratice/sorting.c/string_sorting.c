#include<stdio.h>
#include<stdlib.h>
char  sorting(char *p);
int main()
{
	int n,i;
	printf("enter the size\n");
	scanf("%d",&n);
	char *p=(char *)malloc(n*sizeof(char));

	scanf("%s",p);

	char (*fptr)(char *)=sorting;
	(*fptr)(p);

}

char sorting(char *p)
{
	int i,j;
	char temp;
	for(i=0;p[i]!=0;i++)
	{
		for(j=0;p[j]!=0;j++)
		{
			if(p[j]<p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}

	printf("%s\n",p);
}
