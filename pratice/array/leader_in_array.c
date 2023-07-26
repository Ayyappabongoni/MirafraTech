/*ip- 4,5,3,2,1,9,6
4,5 --5;
4,5,3 --5;
4,5,3,2 --5;
4,5,3,2,1 --5;
4,5,3,2,1,9 --9;
4,5,3,2,1,9,6 --9;

op(5,9)
*/

#include <stdio.h>
int leader(int *p)
{   int x=p[0];
	int i=0,j=0,y=0;
	for(i=0;i<7;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(p[i]>x)
			{   
				x=p[i];//big no
			}
		}
		if(i==0)
		{
			y=x;//first big no
		}

		if(x!=y)
		{
			printf("%d ",x);
			y=x;//assign every big no for nxt comprasion and print
		}
	}
}
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int (*p)(int *)=leader;
	(*p)(arr);
	//    printf("leader is (%d)\n",x);
	return 0;
}



