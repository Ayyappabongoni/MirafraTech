#include<stdio.h>
int function(char s1[]);
int main()
{
	char s[20];
	printf("enter string\n");
	scanf("%19[^\n]s",s);
	int a=function(s);
	printf("length is %d\n",a);
}

int function(char s1[])
{
	int i=0,c=0;
	for(i=0;s1[i]!=0;i++)
	{
		c++;
	}
	return c;
}

