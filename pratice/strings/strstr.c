#include<stdio.h>
int function(char s1[],char s2[]);
int main()
{
	char s[20];
	char d[30];
	printf("enter 1st string\n");
	scanf("%19[^\n]s",s);
	printf("enter sub string\n");
	scanf(" %29[^\n]s",d);
	int a=function(s,d);
	printf("sub str found at index %d\n",a);
}

int function(char s1[],char s2[])
{
	int i=0,j=0,c=0,x,a;
	for(i=0;s1[i]!=0;i++)
	{
		if(s1[i]==s2[j])
		{
			a=i;
			x=a;
			break;
		}
	}
	for(i=0;s2[i]!=0;i++)
	{
		s1[a]==s2[i];
		c++;
	}
	if(a==c&&s2[i]==0)
		return x;
}

