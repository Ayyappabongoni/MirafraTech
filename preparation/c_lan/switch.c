#include<stdio.h>
int main()
{
	int a=2;



	switch(a)
	{	//statments wich are not inside case will not be executed
//		printf("in switch\n");


		case 1:
			printf("case 1\n");
			break;

		case 1+1://(1+1)or 2
			printf("case 2\n");
			break;

		case 3:
			printf("case 3\n");
			break;
		default:
			printf("default\n");
	}
}
