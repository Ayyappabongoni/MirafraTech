//best and worst o(nlogn)
#include<stdio.h>
void merg_sort(int arr[],int lb,int ub);
void merg(int arr[],int lb,int mid,int ub);
int main()
{
	int n,i;
	printf("enter the size\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the values\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	merg_sort(arr,0,n-1);//base and last index
	printf("sorted array is :");
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
	return 0;
}

void merg(int arr[],int lb,int mid,int ub)
{
	int i,j,k;
	int n1=mid-lb+1;
	int n2=ub-mid;
	int L[n1];//first block
	int R[n2];//last block

	for (i = 0; i < n1; i++)
		L[i] = arr[lb + i];//loding first block
	for (j = 0; j < n2; j++)
		R[j] = arr[mid + 1 + j];//loading second block
	i=0;
	j=0;
	k=lb;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];//sending first block
			i++;
		}
		else{
			arr[k]=R[j];//second block
			j++;
		}

		k++;
	}

	while(i<n1)//if some elements remining in first block
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)//if some elemts remining in second block
	{
		arr[k]=R[j];
		j++;
		k++;
	}
}
void merg_sort(int arr[],int lb,int ub)
{
	int mid;
	if(lb<ub){
		mid=lb+(ub-lb)/2;//seperating blocks

		merg_sort(arr,lb,mid);//first block seperating
		merg_sort(arr,mid+1,ub);//second block seperating
		merg(arr,lb,mid,ub);
	}
}
