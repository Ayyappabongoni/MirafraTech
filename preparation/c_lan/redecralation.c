#include<stdio.h>
//no redecration
int a;//weak
int a=20;//strong
int main()
{
    //redecration problem
    //int a;
    //int a=123;//as local var scope is near so 123 will print
    printf("%d",a);
}
