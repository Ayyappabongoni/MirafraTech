/*A pointer to an array(array pointer) is a single pointer that points to the whole array instead of only one element of array
an array of pointers (pointer array)is an array where each element is a pointer to a different location in memory*/

#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int (*p)[5]=&arr;
	printf("%p\n",p);
	p++;
	printf("%p\n",p);
	printf("sizeof array:%lu\n",sizeof(*p));//size of array
	printf("sizeof ptr:%lu\n",sizeof(p));//size of pointer
}
