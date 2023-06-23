/*
pointer variable 
allocate memory through dma
load data
function call structure 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct s
{
	char s[20];
	char *name;
	char *city;
	int a;
	float marks;
};
void function(struct s *p);

int main()
{
	struct s *p=(struct s *)malloc(sizeof(struct s));
	p->name=(char *)malloc(20*sizeof(char));//dma 
	p->city=(char *)malloc(20*sizeof(char));//dma

	printf("enter string\n");
	scanf("%s",p->s);
	strcpy(p->name,"kernelmasters");//load data
	strcpy(p->city,"hyderabad");//load data

	p->a=10;
	p->marks=12.0000;
	function(p);//fun call
	printf("%s\t%s\t%s\t%d\t%f\n",p->s,p->name,p->city,p->a,p->marks);
}

void function(struct s *p)
{
	printf("in function:\n");
	printf("%s\t%s\t%s\t%d\t%f\n",p->s,p->name,p->city,p->a,p->marks);

}
