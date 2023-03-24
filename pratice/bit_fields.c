#include<stdio.h>
struct flags
{

	unsigned int a : 1;
	unsigned int b : 4;
	unsigned int c:2;
	struct student{
		int a;
		char name[10];
	}ss;

};
int main()
{
	struct flags s;
	s.a=1;
	s.b=10;
	s.c=2;

	scanf("%d %s",&s.ss.a,s.ss.name);

	printf("bit field:%u %u %u\n",s.a,s.b,s.c);

	printf("struct:%d %s\n",s.ss.a,s.ss.name);
}
