#include<stdio.h>
union st{
	int a;
	char b;
};

int main()
{
	union st s;
	scanf("%d %c",&s.a,&s.b);
	printf("%d %c\n",s.a,s.b);

	printf("%p\n",&s.a);
	printf("%p\n",&s.b);
}
