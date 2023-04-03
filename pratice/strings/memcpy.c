//void *memcpy(void *dest, const void *src, size_t n)
//The memcpy() function copies the data from the source to the destination, starting from the source address and continuing for num bytes. It returns a pointer to the destination array.
/*strcpy() copies a string until it comes across the termination character ‘\0’. With memcopy(), the programmer needs to specify the size of data to be copied. strncpy() is similar to memcopy() in which the programmer specifies n bytes that need to be copied.

The following are the differences between strcpy() and memcpy():

- memcpy() copies specific number of bytes from source to destinatio in RAM, where as strcpy() copies a constant / string into another string.

- memcpy() works on fixed length of arbitrary data, where as strcpy() works on null-terminated strings and it has no length limitations.

- memcpy() is used to copy the exact amount of data, whereas strcpy() is used of copy variable-length null terminated strings.*/

#include<stdio.h>
#include<stdlib.h>
#define size 10
//int length(char *d);
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
//	int c=length(d);
	for(i=0;i<p;i++)
	{
		t1[i]=t2[i];
	}
	return t1;
}

/*int length(char *d)
{
	int i=0,c=0;
	for(i=0;d[i]!=0;i++)
	{
		c++;
	}
	return c;
}*/
