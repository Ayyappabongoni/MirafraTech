#include<stdio.h>
#include<stdbool.h>

#define size 10


void accending(int *arr)
{

	int i=0,j=0,temp=0;

	for(i=0;i<10;i++)
	{
		//temp=arr[i];
		for(j=0;j<10;j++)
		{

			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}

	}

	printf("after sorint in accending order\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
}

void decending(int *arr)
{

	int i=0,j=0,temp=0;

	for(i=0;i<10;i++)
	{
		//temp=arr[i];
		for(j=0;j<10;j++)
		{

			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}

	}

	printf("after sorint in decending order\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
}


/*
its a fun ptr that retunrns another fun as ptr

<datatype> (*fun(arg1,arg2))(arg3,arg4)

note: arg3,arg4: are the matching arguments of that partiocualr fun to use
*/
void (*operator(bool flag))(int *p)
{
	switch(flag)
	{
		case 1: return accending;
			break;

		case 0: return decending;
			break;
	}
}

int main()
{
	int arr[size],i=0;
	bool user_flag;
	printf("entre inputs for sortings\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("limit is done\n plz enter 1:accending or 0:decending");
	scanf("%d",&user_flag);

	void (*sort_fun_ptr)(int *p)=operator(user_flag);// call the fun ptr api to collect required api and assign to fun_ptr to use that api further

	sort_fun_ptr(arr);// using that api for our use




}
