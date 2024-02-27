/*
****
***
**
*
*/


#include<stdio.h>
int main()
{
    
    int n=5,i=0,j=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

