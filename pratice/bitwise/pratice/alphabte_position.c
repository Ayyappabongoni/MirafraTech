/* Find a letter’s position in alphabet
We can easily find a letter’s position [1-26] in the alphabet by taking 
its bitwise AND with ASCII 31 (00011111 in binary)*/

#include<stdio.h>
int main()
{
char ch;
printf("enter the alphabet\n");
scanf("%c",&ch);
int x=(ch&31);
printf("the alphabet position is %d\n",x);
}
