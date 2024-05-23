#include<stdio.h>
void add(void);
static int function(int a,int b)
{
	return a+b;
}

int (*p)(int,int)=&function;//using function ptr to extend scope
int main()
{
	add();
}
