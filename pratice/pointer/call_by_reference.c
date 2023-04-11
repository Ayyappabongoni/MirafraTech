/*In call by value, a copy of the value of the argument is passed to the function, and any changes made to the parameter inside the function do not affect the original value of the argument in the calling function. This means that the function works with a local copy of the argument, and the original value of the argument remains unchanged.

In call by reference, a reference or pointer to the memory location of the argument is passed to the function. This means that the function works with the original value of the argument in the calling function, and any changes made to the parameter inside the function are reflected in the original value of the argument in the calling function.*/

#include<stdio.h>
/*void fun(int *a,int *b,int *c,int *d,int *e); //call by reference
int main()
{
	int a=10,b=1,c=2,d=3,e=4;
	fun(&a,&b,&c,&d,&e);
	printf("%d %d %d %d %d\n",a,b,c,d,e);
}

void fun(int *a,int *b,int *c,int *d,int *e)
{
	*a=1;
	*b=1;
	*c=1;
	*d=1;
	*e=1;
}*/

int fun(int a,int b,int c,int d,int e);//all by value
int main()
{
	int a=10,b=0,c=2,d=3,e=4;
	int x=fun(a,b,c,d,e);
	printf("%d %d %d %d %d x=%d\n",a,b,c,d,e,x);
}

int fun(int a,int b,int c,int d,int e)
{
	a=1;
	b=1;
	c=1;
	d=1;
	e=1;
return a;
}
