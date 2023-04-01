//size_t strlcat(char *dest, const char *src, size_t size)

/*
strncat limits the length of the copied string, but it may not null-terminate the destination string if the maximum length is reached before the null character in the source string is encountered,

strlcat ensures that the destination string is always null-terminated, even if the maximum length is reached before the null character in the source string is encountered.
*/

#include<stdio.h>
int function(char *d,char *s,int size);
int length(char *d);
int main()
{
	int x;
	char s[10];
	char d[20];
	printf("enter source and destenation strings\n");
	scanf("%s%s",s,d);
	printf("enter the size to concat\n");
	scanf("%d",&x);
	int p=function(d,s,x);
	if(p==0)
	{
		printf("destination size is not enough\n");
	}
	else {printf("the total length is %d\n",p);
		printf("%s\n",d);
	}
}	



int function(char *d,char *s,int size)
{
	int d_len=length(d);
	int s_len=length(s);
	int i=0;
	if(size>d_len-1)//check size enough or not
	{
		return 0;
	}

	for (i=0;i<size-1 && s[i] != '\0';i++) {
		d[d_len]=s[i];
		d_len++;
	}
	d[d_len]=0;//null
	return d_len+s_len;//total len of strings

}
int length(char *d)
{
	int c=0;
	int i=0;
	for(i=0;d[i]!=0;i++)
	{
		c++;
	}
	return c;
}
