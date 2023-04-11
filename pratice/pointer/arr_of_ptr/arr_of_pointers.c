//An array of pointers is an array in which each element of the array is a pointer to some other data type

#include<stdio.h>
int main()
{
	int a=5;
	char b='c';
	int x[10]={1,2,3,4,5,6,7,8,9,10};
	char s[]="hello world";
	float f=12.000;

	void *arr[5];
	arr[0]=&a;
	arr[1]=&b;
	arr[2]=x;
	arr[3]=s;
	arr[4]=&f;

		printf("value:%d\n",*(int *)arr[0]);
		printf("%c\n",*(char *)arr[1]);
		int i;
		for(i=0;i<10;i++)
		{
		printf("%d\n",*((int *)arr[2]+i));
		}

		printf("%s\n",(char *)arr[3]);
		printf("%f\n",*(float *)arr[4]);
}
