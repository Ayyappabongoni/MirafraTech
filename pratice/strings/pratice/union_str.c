#include<stdio.h>
#include<string.h>
struct string
{
	char s[10];
	char d[10];
	int a;
};
int main()
{int n=5;
	//char s[10];
	struct string str;
str.a=10;
	printf("enter the string\n");
	scanf("%[^\n]s",str.s);
	strncpy(str.d,str.s,n);
	str.d[0]='X';
	printf("%s\n",str.d);
printf("%d\n",str.a);
}
