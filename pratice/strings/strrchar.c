//last occurance

#include<stdio.h>
#include<stdlib.h>
int my_strrchar(char *p,char a);
int main()
{
	char a;
	char *p=(char *)malloc(20*sizeof(char));
	printf("enter the string\n");
	scanf(" %s",p);
	printf("enter the char\n");
	scanf(" %c",&a);

	int x=my_strrchar(p,a);
	if(x==0)
		printf("not found\n");
	else
	{
		printf("last occurance at :%d\n",x);
	}
}


int my_strrchar(char *p,char a)
{
	int i=0i,c=0;
	for(i=0;p[i]!=0;i++)
	{
		if(p[i]==a)
		{
			c=i;
		}
	}
	return c;
}
