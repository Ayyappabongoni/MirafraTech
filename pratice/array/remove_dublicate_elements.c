#include<stdio.h>
int main()
{
	int temp=0,j=0,i=0;
	int n;
	printf("enter the size\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);   
	}
	//sorting
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\nsorting is\n");
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\nafter removing\n");
	//removing dublecet
	for(i=0;i<n;i++)
	{
		if(arr[i]!=arr[i+1]){
			printf("%d\t",arr[i]);
		}

	}
}
