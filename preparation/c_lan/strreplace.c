#include<stdio.h>

int compare(char *s,char *p,int i,int j)
{int a=0;
	while(p[i]!='\0'&&s[i]!='\0')
	{
		if(p[i]>s[i])
			a=0;
		else
			a=-1;
		i++;
	}
	return a;
}

int main()
{
	char s[]="mirafra technologies tech";
	char d[]="tech";
	char e[]="xxxx";
	int i=0,j=0;
	for(i=0,j=0;s[i]!='\0';i++)
	{
		if(s[i]==d[j])//checking first index
		{
			int x=compare(s,d,i,j);
			printf("%d\n",x);
			if(x==0)
			{
				for(j=0;e[j]!='\0';j++,i++)
				{
					s[i]=e[j];//replacing
				}
			}j=0;//again makeing j=0 for next replace
		}
	}
	printf("%s\n",s);
}
