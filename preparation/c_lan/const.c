#include<stdio.h>
//assigned gobal var is stored in rodata so cannot be modified and leads to segmentation fault
const int a;//=10;
int main()
{
	int *p=&a;
	*p=20;
	printf("%d",a);
}

/*int main()
{
const int a=10;//assigend loacl var is stored in stack 
//a=20;//cannot modify but with ptr its possible
int *p=&a;
*p=20;
printf("%d",a);
}*/
