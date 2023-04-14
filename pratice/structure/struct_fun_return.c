#include<stdio.h>
struct s fun(int a,int b);

struct s
{
	int add;
	int sub;
};

int main()
{
	struct s A;
	int a=10,b=5;

	A=fun(a,b); 
	printf("%d\t%d\n",A.add,A.sub);
}

struct s fun(int a,int b)
{
	struct s B;
	B.add=a+b;
	B.sub=a-b;
	return B;
}
