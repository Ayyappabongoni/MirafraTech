//void *memmove(void *destination, const void *source, size_t num);
//Here, void represents the return type of the function. The destination and source parameters are pointers to the destination and source of data to be copied, respectively. 
//The num parameter represents the number of bytes to be copied.
//The memmove() function copies the data from the source to the destination, starting from the source address and continuing for num bytes. 
//It can handle cases where the source and destination regions overlap, ensuring that the data is copied correctly.

#include<stdio.h>
#include<stdlib.h>
void* mem_mov(void* d, const void* s, int num);
int main()
{
	char *s=(char *)malloc(10*sizeof(char));//create memory using malloc
	char *d=(char *)malloc(5*sizeof(char));
	int c;
	printf("enter the source destination and size\n");
	scanf("%s %s %d",s,d,&c);
	mem_mov(d,s,c);
	printf("%s\n",d);
}


void* mem_mov(void* d, const void* s, int num) {
	char* dest = (char*) d;
	const char* src = (const char*) s;
	int i;
	if (dest > src) {
		for (i = num; i > 0; i--) {
			dest[i-1] = src[i-1];//reverse printing
		}
	} else if (dest < src) {
		for (i = 0; i < num; i++) {//normal printing
			dest[i] = src[i];
		}
	}

}
