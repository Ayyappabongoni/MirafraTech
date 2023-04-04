#include<stdio.h>

enum names
{
	a,b,c,d,e,f,g
};

//char *s[]={"mon","tue","wed","fri","thu","sat","sun"};

int main()
{
int p;
	enum names x;
	char *s[]={"mon","tue","wed","fri","thu","sat","sun"};
	printf("%d %d %d %d %d %d %d\n",a,b,c,d,e,f,g);
	scanf("%d",&p);

	
	printf("to day is %s\n",s[p]);
}
