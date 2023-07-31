/*
ip iam an indian
op indian an iam*/

#include<stdio.h>
#include<string.h>
void reverse(char *p,int i,int j)
{
	char ch;
	for(;j<i;i--,j++)
	{
		ch=p[j];
		p[j]=p[i];
		p[i]=ch;
	}
}
int main()
{
	int i=0,j=0;
	char ch;
	char s[50];
	printf("enter the string\n");
	scanf("%[^\n]s",s);
	int l=strlen(s);
	printf("%s\n",s);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		ch=s[j];
		s[j]=s[i];
		s[i]=ch;
	}
	printf("rev str\n");
	printf("%s\n",s);

	for(i=0;i<=l;i++)
	{
		if(i==0)
		{
			j=i;
		}
		if(s[i]==32||s[i]==0)
		{
			reverse(s,i-1,j);
			j=i+1;
		}
	}
	printf("final str is\n%s\n",s);
}
