/*You will be given a list of 32 bit unsigned integers. Flip all the bits (1->0 and0->1 ) and return the result as an unsigned integer.*/

#include<stdio.h>
unsigned int fun(int a)//retur unsigned
{
	int i=0;
	for(i=0;i<32;i++)
	{
		if( (a&(1<<i))==0)
		{
			a=(a|1<<i);//set
		}
		else
		{
			a=(a&(~(1<<i)));//clear
		}

	}
	return a;
}

int main()
{
	int n=0,i=0;
	unsigned int x;
	scanf("%d",&n);
	unsigned int arr[n];//unsigned array
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		x=fun(arr[i]);
		printf("%u\n",x);//print unsigned
		x=0;
	}

}
