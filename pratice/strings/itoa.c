#include<stdio.h>
#include<string.h>
void fun(int a)
{
	char s[6],temp;
	int x=0,i=0,j=0;
	while(a!=0)
	{
		x=a%10;
		s[i]=x+48;
		a=a/10;
		i++;
	}
	printf("%s\n",s);
	int b=strlen(s);
	for(i=0,j=b-1;i<j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	printf("%s",s);
}
int main()
{

	int a=12345;
	fun(a);
}
