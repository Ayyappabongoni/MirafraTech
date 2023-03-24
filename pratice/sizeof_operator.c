#include<stdio.h>
#define SIZEOF(X)       ({__typeof__(X) Y; ((char*)(&Y+1) - (char*)(&Y));})


//int y;((char *)(1001) - (char *)(1000))
//1001-1000 = 1

int main()
{
	char a;
	printf("%ld\n",SIZEOF(a));

}
