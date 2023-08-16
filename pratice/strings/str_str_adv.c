#include<stdio.h>
int compare(char *s,char *p,int i);
int main()
{
	//	char s[]="mirafar tehnnotechnologies";
	//	char p[]="rafar";
	char s[30];
	char p[20];
	printf("enter str and sub str\n");
	scanf("%[^\n]s",s);
	scanf(" %[^\n]s",p);
	int i,j=0,x;

	for(i=0,j=0;s[i]!=0;i++)
	{
		if(s[i]==p[j])
		{
			x=compare(s,p,i);
			if(x==1){
				printf("matched\n");
				break;
			}
			else
				continue;
		}
	}
	if(s[i]=='\0')
		printf("not matched\n");
}

int compare(char *s,char *p,int i)
{
	int j=0,c=0;
	for(i,j=0;p[j]!=0;i++,j++)
	{
		if(s[i]==p[j])
		{
			c++;
		}
	}
	if(c==j&&p[j]=='\0')
		return 1;
	else
		return -1;
}
