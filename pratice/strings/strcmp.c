#include<stdio.h>
int function(char s1[],char s2[]);
int main()
{
	char s[20];
	char d[30];
	printf("enter 1st string\n");
	scanf("%19[^\n]s",s);
	scanf(" %29[^\n]s",d);
	int a=function(s,d);
	if(a==-1)
	{
		printf("%s is big string\n",s);
	}
	if(a==1)
	{
		printf("%s is big string\n",d);
	}
	if(a==0)
	{
		printf("both the strigs are equal\n");
	}
}

int function(char s1[],char s2[])
{
int x,i;
	for(i=0;s1[i]!=0&&s2[i]!=0;i++)
	{
		if(s1[i]>s2[i])
		{
			x=-1;
		}
		if(s1[i]<s2[i])
		{
			x=1;
		}
		if(s1[i]==s2[i])
			x=0;
	}
	return x;

}

