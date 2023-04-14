#include<stdio.h>
struct file{
	int a;
	static int b;//static var cannot be decleared in struct cause static create memory at complie time but struct memory is created when var is created
	char c;
};

int main()
{
struct file c;
}
