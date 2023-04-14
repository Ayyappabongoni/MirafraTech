#include<stdio.h>
struct s
{
	int add;
	int sub;
};

int main()
{
	int a=10,b=10;
	struct s A;
	struct s B;

	A.add=a+b;
	A.sub=a-b;

	B.add=A.add;
	B.sub=A.sub;

	printf("%d\t%d\n",B.add,B.sub);
}
