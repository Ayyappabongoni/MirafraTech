#include<stdio.h>
union bit{
	int a;
	float b;
};
int main()
{
	union bit s;
	s.b=1.0;
	s.a=2;
	printf("%f %d\n",s.b,s.a);
}
