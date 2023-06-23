#include<stdio.h>
int main()
{
int a=10;
int *p=&a;
int **q=&p;
int ***r=&q;

***r=0;
printf("%d\n",a);
printf("%d\n",*p);
printf("%d\n",**q);
printf("%d\n",***r);

//printf("address of p:%p\n",&q);


printf("a address:%p\n",&a);
printf("p address:%p\n",&p);
printf("q adderess:%p\n",&q);
printf("address of q:%p\n",r);

}
