#include<stdio.h>
int function(char s[],int a);
int main()
{
	char s[10],ch;
	printf("enter the string\n");
	scanf("%s",s);
	printf("enter the char\n");
	scanf(" %c",&ch);
	int a=function(s,ch);
	printf("found at %d\n",a);
}

int function(char s[],int a)
{
	int i=0;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==a)
			break;
	}
	return i;
}
