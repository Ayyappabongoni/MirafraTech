#include <stdio.h>

int main()
{	int a=200,b=20,c=30;
	int x=a>b?(a>c?a:c):(b>c?b:c);
	printf("%d",x);
	return 0;
}
