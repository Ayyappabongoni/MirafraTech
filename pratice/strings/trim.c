#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void function(char *str)
{
	int i=0,j=0,c=0;

	for(i=0;str[i]==32;i++)
	{
		
			c++;
	}
	for(i=0;str[i]!='\0';i++)
	{
		str[i]=str[i+c];
	}
	for(i=i-c-1;str[i]==32;i--)
	{
	str[i]='\0';
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	char *str=(char *)malloc(n*sizeof(char));
printf("enter the string\n");
	scanf(" %[^\n]s",str);
	function(str);
	printf("%s",str);
	free(str);
}
