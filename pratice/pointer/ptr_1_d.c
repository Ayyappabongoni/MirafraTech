#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,20};
	int *p=arr;
	int i=0;
	printf("%d\n",*(arr+9));//arr[9] array it self act as a pointer in build
	*(arr+0)=100;
	printf("%d\n",*(arr+0));
	printf("%d\n",arr[0]);

	printf("using array\n");
	for(i=0;i<10;i++)
	{
		printf(" %d %p\n",*(arr+i),arr+i);//with array
	}

	printf("using ptr\n");
	*(p+0)=1;
	for(i=0;i<10;i++){
		printf("%d %d %p\n",*(p+i),p[i],p+i);//with pointer
	}
}
