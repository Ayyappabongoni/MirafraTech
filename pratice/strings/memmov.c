//void *memmove(void *destination, const void *source, size_t num);
//Here, void represents the return type of the function. The destination and source parameters are pointers to the destination and source of data to be copied, respectively. 
//The num parameter represents the number of bytes to be copied.
//The memmove() function copies the data from the source to the destination, starting from the source address and continuing for num bytes. 
//It can handle cases where the source and destination regions overlap, ensuring that the data is copied correctly.

#include<stdio.h>
#include<stdlib.h>
int length(char *s);
void mem_mov(char *d,char *s,int a);
int main()
{
	char *s=(char *)malloc(20*sizeof(char));//create memory using malloc
	char *d=(char *)malloc(10*sizeof(char));
	int c;
	printf("enter the source destination and size\n");
	scanf("%s %s %d",s,d,&c);
	mem_mov(d,s,c);
	printf("%s\n",d);
}

void mem_mov(char *d,char *s,int a)
{
	int i=0;
	int d_len=length(d);//length find out for destination string  
	if(d_len>a)//check dest size is enough or not
	{
		for(i=0;i<a;i++)
		{
			d[i]=s[i];
		}
	}
	else
	{
		for(i=a;i>0;i--)//if size is not enough then copy from reverse as many as you can till dest fill
		{
			d[i]=s[i];
		}
	}
d[i]=0;//then add null
}

int length(char *s)
{int i=0,c=0;
	for(i=0;s[i]!=0;i++)
	{
		c++;
	}
	return c;
}
