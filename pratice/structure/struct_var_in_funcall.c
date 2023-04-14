#include<stdio.h>
struct s
{
	int add;
	int sub;
};
void fun(struct s *p,int a,int b);

int main()
{
	struct s A;
	int a=10,b=5;

	fun(&A,a,b); 
	printf("%d\t%d\n",A.add,A.sub);
}

void fun(struct s *p,int a,int b)
{

	p->add=a+b;
	p->sub=a-b;
	printf("%d\t%d\n",p->add,p->sub);
}

