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

	/*const int *const p=&x;//const p pointing to const var so no modify in address or value
	  printf("%d\n",*p);
	//p=&a;
	//*p=10;
	printf("%d\n",*p);
	 */

	/*char b=10;
	  char c=20;
	  const char *q=&b; //store in .rodata no change in address or value
	//*q=11;
	printf("%d",*q);

	//*q=&c;
	//printf("%d",*q);
	 */

	/*
	   char b='a';
	   char c='b';
	   char const *q;
	   q=&b; //address can  change but not value
	 *q=11;
	//printf("%c",*q);

	//q=&c;
	printf("%c",*q);
	 */

}
