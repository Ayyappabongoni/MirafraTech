/*
take second array b[range];
take arr[i] value and store it on b[range] index so b[] index is the value of array[i] value now,
so how many times dublicate value comes we will store in same index

*/
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,1,4,2,7,7,9,5};
    int b[10]={0},i=0;//integer value limit
   for(i=0;i<10;i++)
    {
        
        b[a[i]]='y';
    }
    
    for(i=0;i<10;i++)
    {
        
       if(b[i]=='y')
        printf(" %d",i);
    }
}
