/*
enter a letter and desplay next five letter
ip- W
op- XYZab

or

ip- x
op- yzABC
*/

#include<stdio.h>
void function(char *p)
{
	int i=0;
	for(i=1;i<5;i++)
	{
		if( (*p>=65&&*p<=90)||(*p>=97&&*p<=122) )
		{
			if(i==1)
			{
				*p+=1;//for first alphabet
			}
			if(*p==90)
			{
				printf(" %c",*p);
				*p+=7;//'Z'->a
			}
			if(*p==122)
			{
				printf(" %c",*p);
				*p-=57;//A<-z
			}
			printf(" %c",*p);
			*p+=1;
		}

	}
	printf("\n%d",i);//debug
}

int main()
{
	char ch;
	printf("enter the alphabet\n");
	scanf("%c",&ch);
	void (*p)(char*)=function;
	(*p)(&ch);
}
