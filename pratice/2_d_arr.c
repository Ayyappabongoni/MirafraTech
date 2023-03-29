#include<stdio.h>
int main()
{
int arr[2][5]={ {1,2,3,4,5} , {6,7,8,9,10} };
int *p=(int *)arr;

printf("%d\n",*(p+5));

int (*q)[5]=arr;
printf("%d\n",**(q+1)+3);
printf("%d\n",**(q+1)+4);
}
