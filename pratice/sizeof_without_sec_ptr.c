/*
 the result of subtracting two pointers of the same type indicates 
the number of elements of that type between them
    printf("%ld", (p + 1) - p);

*/
#include <stdio.h>

int main()
{
    int a=10;
    int *p=&a;
    //printf("%ld",(int)(p+1)-(int)p);
    printf("%ld", (p + 1) - p);
    return 0;
}


/*#include<stdio.h>
int main()
{
	int a=10;
	char *p1=&a;
	char *p2=(&a)+1;
	printf("%d\n",p2-p1);
} */
