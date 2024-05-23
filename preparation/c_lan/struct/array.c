#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int arr[5];
	char s[10];
	char *p;
}node;

node a={{1,2,3,4,5},"abhu","bongoni"};//. You have to assign values to each member individually after declaring the variable
int main()
{int i=0;
/*	for(i=0;i<5;i++)
	{
		scanf("%d",&a.arr[i]);
	}


	printf("enter string\n");
	scanf("%s",a.s);


	a.p=(char *)malloc(10*sizeof(char));
	printf("enter second sting\n");
	scanf("%s",a.p);
*/
	//print values
	printf("array values\n");
	for(i=0;i<5;i++)
	{
		printf("%d",a.arr[i]);
	}

	printf("\n%s\n%s\n",a.s,a.p);
}




