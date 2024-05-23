#include<stdio.h>
int x=10;//data .data section
int main()
{
    printf("%d\n",x);
    int x=30;//statck section and scope os strong
    printf("%d\n",x);
    
}
