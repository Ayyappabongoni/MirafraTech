#include<stdio.h>
void function(char s1[],char s2[],int a);
int main()
{
	char s[20];
	char d[30];int a;
	printf("enter 1st string\n");
	scanf("%19[^\n]s",s);
	printf("enter the limit\n");
	scanf("%d",&a);
	function(s,d,a);
	printf("%s\n",d);
}

void function(char s1[],char s2[],int a)
{
	int i=0;
	for(i=0;i<a;i++)
	{
		s2[i]=s1[i];
	}
}

