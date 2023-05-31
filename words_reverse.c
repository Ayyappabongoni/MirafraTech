#include<stdio.h>
int length(char s[])
{
	int i,c=0;
	for(i=0;s[i]!=0;i++)
	{
		c++;
	}
	return c;
}

void swap(char s[],int p,int q)
{
	int i,j;
	char temp;
	for(i=p,j=q-1;i<=j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
}
int main()
{
	char s[100];
	printf("enter the sentence\n");
	scanf("%[^\n]s",s);
	printf("%s\n",s);
	int l=length(s);
	printf("length %d\n",l);
	int i=0,j=0;
	char temp;
	for(i=0,j=l-1;i<=j;i++,j--)//Since array indices start from 0, the last character of the string is at index l-1, 
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	printf("%s\n",s);
	int a;
	for(i=0;s[i]!=0;i++)
	{
		if(i==0)
		{
			a=i;
		}
		if(s[i]==32)
		{
			swap(s,a,i);
			a=i;
		}
	}
	if(s[i]==0)
	{
		swap(s,a,i);
	}
	l=length(s);
	printf("the length is %d\n",l);
	printf("the output is \n %s\n",s);
}
