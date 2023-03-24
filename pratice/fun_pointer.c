#include<stdio.h>
#include<stdlib.h>
void fun(char *p,char *sub,char *rep);
int main()
{int i;
	char *p=(char *)malloc(20*sizeof(char));
	char sub[5];
	char rep[5];
	scanf("%s",p);

	printf("the string is %s\n",p);
	printf("enter sub string\n");
	scanf("%s",sub);
	printf("replace string\n");
	scanf("%s",rep);

	void (*ptr)(char *,char*,char*);
	ptr=fun;
	ptr(p,sub,rep);
}

void fun(char *p,char *sub,char *rep)
{
	int i=0,j=0,d=0,a;
	for(i=0;p[i]!=0;i++)
	{
		if(p[i]==sub[j])
		{
			d=i;
			a=i;
			break;
		}
	}
	j=0;
	for(d;p[d]!=0&&sub[j]!=0;d++)
	{
		p[d]==sub[j];
		j++;
	}
	if(sub[j]==0)
	{i=0;
		for(a;rep[i]!=0;a++)
		{
			p[a]=rep[i];
			i++;
		}
	}
	printf("%s",p);
}
