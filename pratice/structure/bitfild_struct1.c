#include <stdio.h>

struct {
	unsigned int field1 : 1;
	unsigned int field2 : 2;
	struct {
		int a;
		char ch;
	} subfield;
} my_struct;

int main() {
	my_struct.field1 = 1;
	my_struct.field2 = 2;
	my_struct.subfield.a = 5;
	my_struct.subfield.ch= 'a';

	printf("field1 = %d\n", my_struct.field1);
	printf("field2 = %d\n", my_struct.field2);
	printf("field3 = %d\n", my_struct.subfield.a);
	printf("field4 = %c\n", my_struct.subfield.ch);

	return 0;
}

