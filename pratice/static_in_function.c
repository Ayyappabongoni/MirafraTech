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
