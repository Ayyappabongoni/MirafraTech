//size_t strlcpy(char *dest, const char *src, size_t size)


/*
Null-Termination: strncpy does not always null-terminate the destination string, while strlcpy always null-terminates the destination string.

Truncation: strncpy may truncate the source string if it is longer than the maximum number of characters to copy, while strlcpy will copy as much of the source string as will fit in the destination buffer, and null-terminate the destination string.

Return Value: strncpy returns a pointer to the destination string, while strlcpy returns the length of the source string.

strlcpy always null-terminates the destination buffer, whereas strcpy only null-terminates the destination buffer if the source string is shorter than the destination buffer.
*/


#include<stdio.h>
int my_stlcpy(char *d,char *s,int size);
int main()
{
	char s[30];
	char d[30];
	int a;
	printf("enter the source \n");
	scanf("%s",s);
	printf("enter the size to cpy \n");
	scanf("%d",&a);
	int x=my_stlcpy(d,s,a);
	printf("the length of sourc stringis :%d\n",x);
	printf("%s\n",d);
}

int my_stlcpy(char *d,char *s,int size)
{
	int i=0,c=0;
	for(i=0;i<size-1&&s[i]!=0;i++)
	{
		d[i]=s[i];
	}
	d[i]=0;//null termination
	for(i=0;s[i]!=0;i++)
	{
		c++;//returning source length
	}
	return c;
}
