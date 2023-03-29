#include<stdio.h>
void myatoi(char *s);
int main()
{int a;
	printf("enter the size\n");
	scanf("%d",&a);
	char s[a];
	printf("enter the string\n");
	scanf("%s",s);
	myatoi(s);
}

void myatoi(char *s)
{int b=0;
	int a=0,i;
	for(i=0;s[i]!=0;i++)
	{
		b=s[i]-48;
		a=a*10+b;
		b=0;
	}

	printf("%d\n",a);
}
