#include <stdio.h>
int main()
{
	int x='a';
	char *p=(char *)&x;
	printf("%s\n",p);
	x='b';
	*(p+1)=(char *)&x;
	printf("%s\n",p);
	/* char s[4]={'a','b','c','d'};
	   x=(int)s[0];
	   printf("%c",x);
	 */

}

