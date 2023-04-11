#include<stdio.h>
void function(char *d,char *s);
int main()
{
	char s[10]="kernel";
	char d[10];
	function(d,s);
	printf("%s\n",d);
}

void function(char *d,char *s)
{
	for(;*s;)
	{
		*d++=*s++;
	}
	*d=0;
}
