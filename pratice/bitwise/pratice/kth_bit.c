/*Turn off k’th bit in a number.
Turn on k’th bit in a number.
Check if k’th bit is set for a number.
Toggle the k’th bit*/

#include<stdio.h>
#define clear(a,p) (a&(~(1<<p)))
#define set(a,p) (a|(1<<p))
#define toggle(a,p) (a^(1<<p))
int main()
{
	int a,p;
	printf("enter a vlaue\n");
	scanf("%d",&a);
	printf("enter position\n");
	scanf("%d",&p);
	printf("clear is %d\n",clear(a,p));
	printf("set is %d\n",set(a,p));
	printf("toggle is %d\n",toggle(a,p));

	if(a&(1<<p)==0)
		printf("off\n");
	else 
		printf("on\n");
}
