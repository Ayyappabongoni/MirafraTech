#include<stdio.h>
typedef struct ss
{
	int a;
	char ch;
	float b;

	union uu
	{
		int x;
		char y;

		struct 
		{
			int c;
			char d;
		}s2;

	}u;

}s;

int main()
{
	s st;
	st.u.s2.c=12;
	st.u.s2.d='a';

	printf("enter struct int char float values\n");
	scanf("%d %c %f",&st.a,&st.ch,&st.b);
	printf("enter union values int char values\n");
	scanf("%d %c",&st.u.x,&st.u.y);

	printf("struct values are\n");
	printf("%d %c %f\n",st.a,st.ch,st.b);

	printf("union values are\n");
	printf("%d %c\n",st.u.x,st.u.y);

	printf("nested struct values are\n");
	printf("%d %c\n",st.u.s2.c,st.u.s2.d);
}
