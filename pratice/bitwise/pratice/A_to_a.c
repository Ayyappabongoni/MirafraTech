/*Convert uppercase character to lowercase
We can easily convert an uppercase character to a corresponding lowercase character 
by taking its bitwise OR with a space.
space asci=32 (100000)*/


#include<stdio.h>
#define upper(ch) (ch | ' ')
char alphabet(char ch)
{
	if(ch>='A'&& ch<='Z')
	{
		ch= (ch | ' ');
	}
	return ch;
}

int main()
{
	char a;
	printf("enter the alphabet\n");
	scanf("%c",&a);
	char (*fptr)(char)=alphabet;
	char x=(*fptr)(a);
	printf("after coverting upper to lower the alphabet is :%c\n",x);
	printf("macro :%c\n",upper(a));
}
