#include <stdio.h>

void function(char *s)
{
	int i=0,j=0,c=0;
	for(i=0;s[i]!=0;i++)
	{
		c++;
	}
	char temp;
	printf("%d\n",c);
	for(i=0,j=c-1;i<j;i++,j--)
	{
		temp=s[j];
		s[j]=s[i];
		s[i]=temp;
	}
	printf("%s\n",s);
}
int main()
{
	char s[20]="kernel masters";
	function(s);
	printf("%s\n",s);
	return 0;
}
