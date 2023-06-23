#include<stdio.h>
#include<stdlib.h>

char *my_move(char *d,char *s,int p);

int main()
{
	char s[]="hello";
	char d[]="world";
	int p;
	printf("enter a size\n");
	scanf("%d",&p);
	char *t=(char *)my_move(d,s,p);
	printf("%s",t);

}
char *my_move(char *d,char *s,int p)
{
	char *temp=(char *)malloc(sizeof(char)*p);
	if(NULL==temp)
	{
		return NULL;
	}
	else
	{
		int i=0;
		for(i=0;i<p;i++)
		{
			*(temp+i)=*(s+i);
		}
		for(i=0;i<p;i++)
		{
			*(d+i)=*(temp+i);
		}
		free(temp);
	}
	return d;


}
