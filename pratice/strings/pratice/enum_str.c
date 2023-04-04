#include<stdio.h>

enum names
{
	a,b,c,d,e,f,g
};

//char *s[]={"mon","tue","wed","fri","thu","sat","sun"};

int main()
{
	enum names x;
	char *s[]={"mon","tue","wed","fri","thu","sat","sun"};
	int a;
	printf("enter from 0-6\n");
	scanf("%d",&a);

	x=a;
	printf("to day is %s\n",s[x]);
}
