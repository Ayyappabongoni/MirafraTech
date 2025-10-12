#include<stdio.h>
int main()
{
    int a=0x1234; //op: 0x4231
    
    int b = ( ((a&0xf000)>>12) | ((a&0x000f)<<12) ); //get values
     printf("%x\n", b);
     
    a= (a& ~(0xf000));
    a= (a& (~(0x000f))); //clear spaces
    
    
     printf("%x\n", a);
    a= a|b; // swap
    
    printf("%x", a);
}

/*op
4001
230
4231
*/
