#include<stdio.h>
void function(char s[]);
int main()
{
	int i,j;
	char s[]={"kernel master"};
	function(s);
	printf("%s\n",s);
}

void function(char s[])
{
	int i,j;
	int c=0;
	char temp;
	for(i=0;s[i]!=0;i++)
	{
		c++;
	}
	for(i=0;i<c;i++,c--)
	{
		temp=s[i];
		s[i]=s[c-1];
		s[c-1]=temp;
	}
}
