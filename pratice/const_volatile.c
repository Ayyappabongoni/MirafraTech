
/*
   const volatile is used to denote variables that are both constant (cannot be modified by the program) and 
   volatile (can be modified externally).This combination is useful in scenarios where variables may be 
   accessed asynchronously by hardware or other software components, and it ensures that the compiler 
   behaves appropriately with respect to optimizations and memory accesses.
 */

#include<stdio.h>
int main()
{
	const volatile int a=10;/*nead to be assign at declaration time else 
error: assignment of read-only variable ‘a’
7 |     a=10;*/

	int *p=&a;
	*p=20;//work but warning
	printf("%d",a);

}

/*const volatile variables are typically stored in read-only data sections or 
  memory-mapped regions, depending on their usage context. 
  However, the exact storage location can vary based on compiler and platform-specific behavior.*/
