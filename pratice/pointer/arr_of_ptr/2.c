#include<stdio.h>

int main()
{
	int i=0;
	int a=10;
	char ch='a';
	float f=1.20000;
	char s[10]="jhfvbjhb";
	int arr[5]={1,2,3,4,5};

	void *p[5];
	p[0]=&a;
	p[1]=&ch;
	p[2]=&f;
	p[3]=&s;
	p[4]=&arr;


	printf("%d\n", *(int *)p[0]);
	printf("%c\n", *(char *)p[1]);
	printf("%f\n", *(float *)p[2]);
	printf("%s\n", (char *)p[3]);
	for(i=0;i<5;i++)
	{
		printf("%d\n", *( (int *)p[4]+i) );
	}
}
