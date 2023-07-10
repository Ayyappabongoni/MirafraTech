//how many times target is happen in multiplication table

#include <stdio.h>
int main()
{
	int c=0,a;
	int i=1,j=1;

	printf("enter the target to check\n");
	scanf("%d\n",&a);
	for(i=1;i<=10;i++)
	{

		for(j=1;j<=10;j++)
		{

			if(i*j==a)
			{

				c++;
				printf("%d*%d==%d\n",i,j,a);
				if(c==3)
				{

					printf("%d\n",a);
					c=0;    
				}
			}
		}
	}
	return 0;
}

