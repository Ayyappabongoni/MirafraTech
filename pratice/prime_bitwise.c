//prime no 
#include<stdio.h>
int main()
{
	int a;
	printf("emter the number\n");
	scanf("%d",&a);
	if((a & a-1)==a-1)
	{
		printf("%d is prime no\n",a);
	}
	else
		printf("%d is not a prime number\n",a);
}
