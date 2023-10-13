#include<stdio.h>
int main()
{
    
    int arr[5]={1,2,3,4,5,6,7,8,9};
    
    int i=0;
    for(i=0;i<5;i++)
    {
        printf(" %d",arr[i]);
    }
}

/*main.c:5:31: note: (near initialization for ‘arr’)
main.c:5:33: warning: excess elements in array initializer
    5 |     int arr[5]={1,2,3,4,5,6,7,8,9};
      |                                 ^
main.c:5:33: note: (near initialization for ‘arr’)
 1 2 3 4 5
*/
