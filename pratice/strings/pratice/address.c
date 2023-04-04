#include<stdio.h>
char d[10]="masters";
const char dd[10]="xxx";
int main()
{
	char s[9]="kernel";
	printf("base add:%p\n",s);
	printf("first index:%p\n",&s[0]);
	printf(" second index:%p\n",&s[1]);
	printf("size:%lu\n",sizeof(s));
}
