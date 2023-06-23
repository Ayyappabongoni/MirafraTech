#include<stdio.h>
#include<unistd.h>

int main()//1 process
{
	int x=fork();//2 process

	fork();//4 process
	fork();//8 process
	fork();//16 process
	printf("1\n");//16 1's
}
