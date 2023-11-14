#include<stdio.h>
#include<stdlib.h>

struct node{

	int *p;
	char *ch;
	float *f;
}A;

int main()
{
	A.p=(int *)malloc(sizeof(int));
	A.f=(float *)malloc(sizeof(float));
	*(A.p)=123;
	*(A.f)=1.000;
	A.ch="e3e0";
	printf("%d %s %f",*(A.p),A.ch,*(A.f));
}
