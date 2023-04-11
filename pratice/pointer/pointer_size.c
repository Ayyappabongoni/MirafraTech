#include<stdio.h>
int main()
{
	char a='b';
	int b=123;
	float c=12.0000;
	double d=123342324;
	long int e=11111;
	unsigned int f=1;

	char *cp=&a;
	int *ip=&b;
	float *fp=&c;
	double *dp=&d;
	long int *lp=&e;
	unsigned int *up=&f;

	printf("size of char pointer:%ld  value %c\n",sizeof(cp),*cp);
	printf("size of int pointer:%ld  value %d\n",sizeof(ip),*ip);
	printf("size of float pointer:%ld  value %f\n",sizeof(fp),*fp);
	printf("size of double pointer:%ld  value %lf\n",sizeof(dp),*dp);
	printf("size of long pointer:%ld  value %ld\n",sizeof(lp),*lp);
	printf("size of unsigned pointer:%ld  value %d\n",sizeof(up),*up);
}
