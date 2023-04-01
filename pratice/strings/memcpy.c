//void *memcpy(void *dest, const void *src, size_t n)
//The memcpy() function copies the data from the source to the destination, starting from the source address and continuing for num bytes. It returns a pointer to the destination array.

#include<stdio.h>
#include<stdlib.h>
#define size 10
void *my_memcpy(void *d,void *s,int p);
int main()
{
	char s[10];
	char d[20];
	printf("enter the string\n");
	scanf("%s%s",s,d);
	char *t=(char *)my_memcpy(d,s,size);
	printf("copied string is :%s\n",t);
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
