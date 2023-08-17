#include<stdlib.h>
#include<stdio.h>
int a=10;
float b=10.002;
struct a
{

	int a;
	int *p;
	struct b
	{
		float f;
		float *ff;
	}s2;
}s1={1,&a,{12,&b}};

int main()
{
	/* s1.p=(int *)malloc(sizeof(int));
	   s1.s2.ff=(float *)malloc(sizeof(float));
	   scanf("%d%d %f%f",&s1.a,s1.p,&s1.s2.f,s1.s2.ff);*/
	printf("%d %d %f %f",s1.a,*(s1.p),s1.s2.f,*(s1.s2.ff));   
}
