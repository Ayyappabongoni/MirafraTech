#include<stdio.h>
int function(int a)
{
	static int sum=0,rem=0,i=1; 
	if(a==0){
		return sum;
	}

	rem=a%2;
	sum+=rem*i;
	i=i*10;

	function(a/2);
}

int main()
{
	int a=1;
	a=function(a);
	printf(" %d",a);
	return 0;
}
