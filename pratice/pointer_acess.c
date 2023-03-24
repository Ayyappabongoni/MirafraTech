//pointer types

#include<stdio.h>
int main()
{

int a=1;
const int x=2;

/*int *const ptr=&a;// const pointer modify value not address
printf("%d\n",*ptr);
//ptr=&x; not possible
*ptr=10;
printf("%d",*ptr);
*/

/*const int *p=&x;//pointer pointing to const var so value cant change but address can 
printf("%d\n",*p);
p=&a;
//*p=10; //not possible
printf("%d\n",*p);
*/

const int *const p=&x;//const p pointing to const var so no modify in address or value
printf("%d\n",*p);
//p=&a;
//*p=10;
printf("%d\n",*p);


}
