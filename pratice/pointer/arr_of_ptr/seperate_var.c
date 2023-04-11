#include<stdio.h>
int main()
{
	int a=10,b=1,c=0,d=4;
	int *p[4]={&a,&b,&c,&d};
	int i;
	for(i=0;i<4;i++){
		printf("%d address:%p\n",*p[i],p[i]);
	}
}
