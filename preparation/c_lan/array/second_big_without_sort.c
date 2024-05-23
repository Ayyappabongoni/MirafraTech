/*find the second biggest element in array without sorting*/

#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int big=0,secbig=0,i=0;

	for(i=0;i<5;i++)
	{
		if(arr[i]>big)//check big no
		{
			secbig=big;//update secbig
			big=arr[i];//update big
		}
		else if(arr[i]>secbig&&arr[i]!=big)//check secbig
		{
			secbig=arr[i];//update secong big
		}
	}
	printf("%d\n",secbig);
}
