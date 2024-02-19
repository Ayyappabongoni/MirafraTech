/*
0000 1111

op 3
*/
#include <stdio.h>

/*int main()
{
	int a=15,i=0,c=0;

	for(i=0;i<30;i++)
	{
		if( ((a&(1<<i))!=0) && ((a&(1<<(i+1)))!=0))
		{
			c++;
		}
	}
	printf("%d",c);
	return 0;
}*/
int main()
{
	int a=10,i=0,c=0;
	while(a!=0)
	{
		if((a&3)==3)
		{
			c++;
		}
		a=a>>1;
	}
	printf("%d\n",c);
}

