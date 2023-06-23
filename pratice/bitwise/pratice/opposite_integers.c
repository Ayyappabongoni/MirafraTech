/*Detect if two integers have opposite signs or not*/

#include<stdio.h>
void binary(int a);
int main()
{
	int a,b;
	printf("enter the values\n");
	scanf("%d%d",&a,&b);
	binary(a);
	binary(b);
	if((a^b)<0)
	{
		printf("both have different signs\n");
	}
	else
		printf("both have same signs\n");

}

void binary(int a)
{
	int i=0;
	printf("\nbinary value of %d is:",a);

	for(i=31;i>=0;i--)
	{
		if( (a&(1<<i))==0)
		{
			printf("0");
		}
		else
			printf("1");
	}
}
