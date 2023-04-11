#include<stdio.h>
void function(char *d,char *s);
int main()
{
	char s[10]="kernel";
	char d[20]="master";
	function(d,s);
	printf("%s\n",d);
}

void function(char *d,char *s)
{

	for(;*d;*d++);//till not

	for(;*s;)
	{
		*d++=*s++;//cat from null
	}
	*d=0;
}

