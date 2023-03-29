#include<stdio.h>
void function(char s[],char d[]);
int main()
{
	char s[20];
	char d[30];
	printf("enter 1st string\n");
	scanf("%19[^\n]s",s);
	scanf(" %29[^\n]s",d);
	function(s,d);
	printf("%s\n",d);
}

void function(char s[],char d[])
{
	int i=0,j=0;
	for(j=0;d[j]!='\0';j++)
	{
	}
	for(i=0;s[i]!='\0';i++)
	{
		d[j]=s[i];
		j++;
	}
	d[j]='\0';
}
