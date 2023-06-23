#include<stdio.h>
int main()
{
	int a[10]={1,1,1,1,1,1,1,1,1,1};
	int *p=a;

	printf("%d\n",++(*(p++)));//index value pre increnent
	//printf("%d\n",++(*(p++)));
	/*int i=0;
	  while(i<10){
	  printf("%d\n",*(p++));
	  i++;
	  }*/

}
