/*In little-endian representation, the least significant byte (LSB) is stored at the lowest memory address, while the most significant byte (MSB) is stored at the highest memory address.*/

#include<stdio.h>

union xyz
{
	int x;
	char array[4];
};

int main()
{
	union xyz A;
	A.x=0x12345612;

	printf("0x%x\n",A.x);

	if(A.array[0]==0x78)
	{
		printf("little inidan\n");
	}
	if(A.array[0]==0x12)
	{
		printf("big indian\n");
	}
}
