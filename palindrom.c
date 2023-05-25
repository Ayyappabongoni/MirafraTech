#include <stdio.h>
int function(char s[])
{

	int i,j,c=0,a=0;
	for(i=0;s[i]!='\0';i++)
	{
		c++;
	}
	printf("len- %d\n",c);

	for(i=0;i<c/2;i++)
	{
		if(s[i]!=s[c-i-1])
		{
			a=1;
			break;
		}
	}
	return a;
}
int main()
{
	char s[20];
	printf("enter the string\n");
	scanf("%s",s);
	int x=function(s);
	if(x==0)
		printf("paliundrom\n");
	if(x==1)
		printf("not palindrom\n");
}

