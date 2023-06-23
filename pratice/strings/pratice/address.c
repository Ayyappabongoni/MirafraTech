#include<stdio.h>
char d[10]="masters";
const char dd[10]="xxx";
int main()
{
	char s[100]="kernelmasters";
	printf("first index:%c\n",s[4]);
	printf("first index:%s\n",&s[4]);
	printf("first index:%s\n",(s+4));
}
