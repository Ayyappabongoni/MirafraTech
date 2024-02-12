#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int reverse(char *p,int i,int j)
{
	static char ch;
	if(j>i)
	{
		return 1;
	}
	ch=p[i];
	p[i]=p[j];
	p[j]=ch;

	return reverse(p,i-1,j+1);
}
int main()
{
	char *p=(char *)malloc(20*sizeof(char));
	printf("entre the string with size 0 below\n");    
	scanf("%s",p);
	int j=0;
	int i=strlen(p)-1;

	reverse(p,i,j);

	printf("%s",p);
}


