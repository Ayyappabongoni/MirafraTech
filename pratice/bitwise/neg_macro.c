#include<stdio.h>
#define POSNEG(n) do{\
	if(((n>>31)&1)==1)\
	{\
        	printf("num is negative");\
	}\
	else\
	{\
	printf("num is positive");\
	}\
	}while(0)

int main()
{
        int n;
        printf("enter a number");
        scanf("%d",&n);
        POSNEG(n);
}

