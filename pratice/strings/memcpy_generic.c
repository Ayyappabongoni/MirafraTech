#include <stdio.h>
#define macro(dt,fn) dt fn(dt *p,dt *q,dt n)\
{\
	dt i=0,j=0;\
	for(i=0;i<n;i++)\
	{\
		p[i]=q[i];\
	}\
}\

	macro(int,mymemcpy)
	macro(char,mymemcpy1)
int main()
{
	int arr[5]={1,2,3,4,5,};
	int dest[5];
	int n=5,i;
	mymemcpy(dest,arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",dest[i]);
	}
	// char
	char str1[20]={"kernel masters"};
	char str2[10];
	int x=5;
	mymemcpy1(str2,str1,x);
	printf("string is\n");
	printf("%s\n",str2);
}

