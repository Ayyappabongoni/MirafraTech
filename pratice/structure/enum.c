#include<stdio.h>

enum my_enum
{
	a, b,c,d

};
int main()
{
	enum my_enum s;
	printf("%d %d %d %d\n",a,b,c,d);
	int x;
	scanf("%d",&x);
	s=x;
	switch(s)
	{
		case 0:printf("not tiffin\n");
		       break;
		case 1:printf("sun-idly\n");
		       break;
		case 2:printf("mon-dosa\n");
		       break;
		case 3:printf("tue-puri\n");
		       break;
		case 4:printf("wed-vada\n");
		       break;
	}
}

