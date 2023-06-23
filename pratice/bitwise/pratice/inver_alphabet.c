/*Invert alphabet’s case
We can easily convert an alphabet’s case by taking its bitwise XOR with a space.
If we take bitwise OR of an uppercase character with ' ', the third significant bit will be set, and we will get its lowercase equivalent.
If we take bitwise AND of a lowercase character with '_', the third significant bit will be unset, and we will get its uppercase equivalent.
If we take bitwise XOR of an uppercase or lowercase characters with ' ' (ASCII 00100000), only its third significant bit will be toggled, i.e., lowercase becomes uppercase and vice versa.*/


#include<stdio.h>
char alphabet(char ch)
{
	if(ch>='A'&&ch<='Z')
	{
		ch=(ch^' ');
		return ch;
	}
	if(ch>='a'&&ch<='z')
	{
		ch=(ch^' ');
		return ch;
	}
}
int main()
{
	char ch;
	printf("enter the alphabet\n");
	scanf("%c",&ch);
	char (*fptr)(char)=alphabet;
	ch=(*fptr)(ch);
	printf("after coverting :%c\n",ch);
}
