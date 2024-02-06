#include<stdio.h>
#define size 5
int main()
{
    
    int c=0,i=0,j=0,temp=0;
    int arr[5]={1,2,3,4,5};
    
    while(c!=5)
    {
        for(i=size-1;i>=0;i--)
        {
            if(i==size-1){
                temp=arr[i];//storing the last index value
            }
            arr[i]=arr[i-1];//shifting values
            if(i==0)
            {
                arr[i]=temp;//last value to first index
            }
        }
        c++;
        for(i=0;i<5;i++)
        {
        printf("%d",arr[i]);
        }
        printf("\n");
    }
}

/*
output-
51234
45123
34512
23451
12345
*/
