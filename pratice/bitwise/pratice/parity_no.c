/*Computing parity of a number
31 in binary is 00011111
The parity of 31 is odd*/

#include<stdio.h>
int main()
{
	int a,c=0,i;
	printf("enter a value\n");
	scanf("%d",&a);
	for(i=31;i>=0;i--)
	{
		if((a&(1<<i))==1)
		{
			c++;
		}
	}
	if(c%2==0)
		printf("the parity of %d is even\n",a);
	else
		printf("the parity of %d is odd\n",a);
}
