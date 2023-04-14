#include<stdio.h>

typedef struct st
{
	int a;
	char ch;
	struct stu
	{
		int a1;
		char ch1;
	}s2;
}s1;

int main()
{
s1 s;
scanf("%d %c",&s.s2.a1,&s.s2.ch1);
printf("%d\n%c\n",s.s2.a1,s.s2.ch1);
printf("%lu\n%lu",sizeof(s),sizeof(s.s2));
}
