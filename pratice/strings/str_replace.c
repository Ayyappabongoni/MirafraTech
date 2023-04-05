#include<stdio.h>
#include<stdlib.h>

int function(char *s,char *sub,char *rep)
{
	int i=0,j=0,c=0,x,a;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==sub[j])
		{
			a=i;
			x=a;//first index match
			break;
		}
	}
	for(i=0;sub[i]!=0;i++)
	{
		s[a]==sub[i];//check remining index
		c++;
	}
	if(sub[i]==0)
	{
		for(i=0;rep[i]!=0;i++)
		{
			s[x]=rep[i];//replacing 
			x++;
		}
	}
}
int main()
{
	char *s=(char *)malloc(20*sizeof(char));
	char sub[5];
	char rep[5];

	printf("enter the string substring and relpace string in order\n");
	scanf("%s %s %s",s,sub,rep);
	function(s,sub,rep);
	printf("%s\n",s);
}
