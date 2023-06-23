//Sort binary array in linear time

#include<stdio.h>
#include<stdlib.h>

int*binary_array(int arr[],int n)
{
	int *arr2=(int *)malloc(n*sizeof(int));
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==0){
			arr2[j]=arr[i];
			j++;
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==1){
			arr2[j]=arr[i];
			j++;
		}
	}
	return arr2;
	free(arr2);
}
int main()
{
	int n,i;
	printf("enter the size\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	int*(*fptr)(int*,int)=binary_array;
	int *res=(*fptr)(arr,n);
	printf("the array after sorting is \n");
	for(i=0;i<n;i++)
	{
		printf("%d",res[i]);
	}
	printf("\n");


}
