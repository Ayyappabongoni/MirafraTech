#include<stdio.h>
void *my_memcpy(void *d,void *s,int p);

int main()
{
	char s[]={"master"};
	char d[]={"kernel is not good"};
	int p;
	printf("enter no of bytes to be copied\n");
	scanf("%d",&p);
	char *t=(char *)my_memcpy(d,s,p);
	printf("%s",t);
}
void *my_memcpy(void *d,void *s,int p)
{
	char *t1=(char *)d;
	char *t2=(char *)s;
	int i=0;
	for(i=0;i<p;i++)
	{
		t1[i]=t2[i];
	}
	return t1;
}
