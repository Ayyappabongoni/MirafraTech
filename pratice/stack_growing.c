#include<stdio.h>
int main()
{
	int arr[2];
	if( (&arr[1]-arr[0]) <0)
	{
		printf("down\n");
	}
	else 
		printf("up\n");
	printf("arr[1]: %p\n",&arr[1]);
	printf("arr[0]: %p\n",arr);
}
