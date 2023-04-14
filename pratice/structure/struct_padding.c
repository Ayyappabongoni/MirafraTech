//structure padding 
#include<stdio.h>
#pragma pack(1)

typedef struct student{
	char a;
	int b;
	float c;
	int d;
}s;

int main()
{
	s st;

	printf("%p\n",&st.a);
	printf("%p\n",&st.b);
	printf("%p\n",&st.c);
	printf("%p\n",&st.d);

	printf("sizeof struct :%lu\n",sizeof(s));
}
