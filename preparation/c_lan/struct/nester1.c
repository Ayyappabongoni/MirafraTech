#include<stdio.h>

typedef struct node
{
	int a;
	char ch;
	struct node2
	{
		int aa;
		char chch;
		struct node3
		{
			int aaa;
			char chchch;
			union node4
			{
				int p;
				char q;
			}A4;
		}A3;
	}A2;
}node;

//node A={1,'a',{2,'b',{3,'c',{4,'d'}}}};
node A;
int main()
{

scanf("%d %c %d %c %d %c %d %c",&A.a,&A.ch,&A.A2.aa,&A.A2.chch,&A.A2.A3.aaa,&A.A2.A3.chchch,&A.A2.A3.A4.p,&A.A2.A3.A4.q);
printf("%d %c\n%d %c\n%d %c\n%d %c\n",A.a,A.ch,A.A2.aa,A.A2.chch,A.A2.A3.aaa,A.A2.A3.chchch,A.A2.A3.A4.p,A.A2.A3.A4.q);
}

