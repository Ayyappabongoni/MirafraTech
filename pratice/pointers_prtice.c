#include<stdio.h>

int main()
	/*
	   {
	   int a=10;
	   float b=3.14;

	   void *p=NULL;
	   p=&a;
	   printf("%d\n",*(int*)p);
	   p=&b;
	   printf("%f\n",*(float*)p);
	   }


	 */


	/*
	   {
	   int a=10,b=20;
	   int *p=&a;
	   free(a);
	//float *p=&b=NULL;
	printf("%d",*p);
	}
	 *//*


	      {
	      int a=10;
	      float *p=&a;
	      printf("%d\n%f",*(&a),*p);
	      }*//*

		    {
		    int a=10;
		    int *p=&a;
		  *p=30;
		  printf("%d",*p);
		  }*/

{
	int a=1;
	int *p=&a;
	int *q=p;
	printf("%d\n",*q);
	printf("a is %p\n",&a);
	printf("p is %p\n",p);
	printf("q is %p\n",&q);
}
