#include<stdio.h>
#include<string.h>
struct string
{
	char s[10];
	char d[10];
};
int main()
{int n=10;
	//char s[10];
	struct string str;
	printf("enter the string\n");
	scanf("%[^\n]s",str.s);
	strncpy(str.d,str.s,n);
	str.d[0]='X';
	printf("%s\n",str.d);
}
