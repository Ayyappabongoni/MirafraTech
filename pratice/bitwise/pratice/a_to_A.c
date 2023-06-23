/* Convert lowercase character to uppercase
Similarly, we can easily convert a lowercase character to a corresponding uppercase character 
by taking its bitwise AND with an underscore character
_ asci=95 (1011111)
.*/

#include<stdio.h>
#define lower(ch) (ch&'_')
char alphabet(char ch)
{
	if(ch>='a'&&ch<='z')
	{
		ch=(ch&'_');
	}
	return ch;
}
int main()
{
	char ch;
	printf("enter the alphabet\n");
	scanf("%c",&ch);
	char (*fptr)(char)=alphabet;
	ch=(*fptr)(ch);
	printf("after coverting :%c\n",ch);
	printf("macro :%c\n",lower(ch));
}
