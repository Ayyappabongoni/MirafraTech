/*Find the position of the only set bit in a number
The idea is to unset the rightmost bit of the number n and check if it becomes 0 or not. 
00010000    &                   (n = 16)
00001111                        (n-1 = 15)
~~~~~~~~
00000000
log2(16) + 1 = 5
*/


#include<stdio.h>
int main()
{
	int a,x;
	printf("enter a value\n");
	scanf("%d",&a);
	if( (a&(a-1)) ==0){
		x=( (a&(a-1)) ^a);
		printf("the only right most bit is :%d\n",x);
	}
	else{
		printf("element is not valid\n");
	}
}
