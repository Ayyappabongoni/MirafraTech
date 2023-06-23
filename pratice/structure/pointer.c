#include<stdio.h>

struct s
{
	char *name;
	char *course;
	char *village;
	int a;
	float marks;
};

int main()
{
	struct s A;
	A.name="kernel";
	A.course="software";
	A.village="hyderabad";
	A.a=10;
	A.marks=123.44;
	printf("%s\t%s\t%s\t%d\t%f\n",A.name,A.course,A.village,A.a,A.marks);
}
