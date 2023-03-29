#include<stdio.h>
void function(char s1[],char s2[]);
int main()
{
	char s[20];
	char d[30];
	printf("enter 1st string\n");
	scanf("%19[^\n]s",s);
	function(s,d);
	printf("%s\n",d);
}

void function(char s1[],char s2[])
{
	int i=0;
	for(i=0;s1[i]!=0;i++)
	{
		s2[i]=s1[i];
	}
}
