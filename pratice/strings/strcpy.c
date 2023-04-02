#include<stdio.h>
#include<stdlib.h>
void function(char s1[],char s2[]);
int main()
{
	int a;
	printf("enter the size\n");
	scanf("%d",&a);
	char *d=(char *)malloc(a*sizeof(char));
	char *s=(char *)malloc(a*sizeof(char));
	printf("enter 1st string\n");
	scanf(" %[^\n]s",s);
	function(d,s);
	printf("%s\n",d);
	free(d);
	free(s);
}

void function(char *d,char *s)
{
	int i=0;
	for(i=0;*(s+i)!=0;i++)
	{
		*(d+i)=*(s+i);
	}
	*(d+i)=0;
}
