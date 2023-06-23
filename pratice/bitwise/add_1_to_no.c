/*-(~a): The minus sign (-) negates the value obtained from the previous step. 
So, if ~a resulted in a positive value, -~a will make it negative, and 
if ~a resulted in a negative value, -~a will make it positive.*/

#include<stdio.h>
int main()
{
	int a;
	printf("enter no\n");
	scanf("%d",&a);
	a=-(~a);
	printf("%d",a);
}
