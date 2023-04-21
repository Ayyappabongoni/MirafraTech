#include<stdio.h>
#include<stdlib.h>

struct s
{
	int a;
	char name[10];
	float marks;
};

int main()
{
	struct s *p=(struct s*)malloc(sizeof(struct s));
	printf("enter id name marks\n");
	scanf("%d%s%f",&p->a,p->name,&p->marks);
	printf(" %d %s %f\n",(*p).a,p->name,p->marks);
}
