#include<stdio.h>
int main()
{
	int a,i,rem;
	printf("enter the value\n");
	scanf("%d",&a);
	for(i=0;i<4;i++)
	{
		rem=a>>i;
		if((rem&1)==1)
			printf("1");
		else
			printf("0");
	}
}

// 1010   101   10  1
//    1     1    1  1 &

//    0     1    0  1 rev off  1010
