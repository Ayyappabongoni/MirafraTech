#include<stdio.h>


/*
   static cannot be inserted in function parameters because

vraiables in  function are generally stored in stack but static is stored in data section so error
 */
void function(static int a);
{

}

int main()
{
	int a=10;
	function(10);

}

#include <stdio.h>

int function(int a)
{
	printf("%d\n",a);
	a=12;
	return a;
}
int main()
{static int a=10;
	/*possible*/
	static int b;
	b=function(a);

	/*not possible
	  static int b=function(a);
	 */    
	printf("%d main\n",b);

	return 0;
}


