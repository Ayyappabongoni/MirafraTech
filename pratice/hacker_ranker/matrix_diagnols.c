/*Given a square matrix, calculate the absolute difference between the sums of its diagonals.
1 2 3
4 5 6
9 8 9 
x=1+5+9
y=3+5+9
z=|x-y|
printf(z)
*/

#include<stdio.h>
int main()
{
	int n,i,j,sum=0,sum2=0;
	printf("enter size\n");
	scanf("%d",&n);
	int arr[n][n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++)//diagonal 1
	{
		j=i;
		sum+=arr[i][j];
	}
	for(i=0,j=n-1;i<n;i++,j--)//diagonal 2
	{

		sum2+=arr[i][j];
	}
	int x=sum-sum2;
	if(x>0)
		printf("%d",x);
	else
		printf("%d",-(x));

}
