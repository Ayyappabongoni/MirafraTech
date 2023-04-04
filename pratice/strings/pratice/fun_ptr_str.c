#include<stdio.h>
void fun(char *s);
int main()
{
	char s[10]="kernel";
	void (*fptr)(char *)=fun;
	(*fptr)(s);
	printf("fun:%s\n",s);
}

void fun(char *s)
{
	printf("fun:%s\n",s);
	s[0]='x';
}
