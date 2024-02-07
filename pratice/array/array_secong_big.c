/*secong biggest element in array without sorting*/


#include<stdio.h>
int main()
{
    int a[5]={68,124,76,6,8},i=0,j=0,q=0,big=0,secbig=1000;
    
    for(i=0;i<5;i++)
    {
        if(a[i]>big)
        {
            big=a[i];//store big value
            j=i;//store index value
        }
    }
    printf("%d\n",big);
    int result=0;
    for(i=0;i<5;i++){
        if(i!=j)//skipping the index
        {
            result=big-a[i];//subtract the value
            if(result<=secbig)
            {
                q=i;//stores the least substarct value index
                secbig=result;
            }
        }
    }
    printf("%d",a[q]);
}
