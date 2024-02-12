#include<stdio.h>

int function(char *s,char *p,int i,int j,int n)
{
	if(j==n)
	{
		return 1;
	}

	s[i]=p[j];

	function(s,p,i+1,j+1,n);
}

int main()
{

	char s[50]="mirafra";
	char p[30]="technologoies";

	int i=0,j=0,n=5;


	for(i;s[i]!='\0';i++);
	


	function(s,p,i,j,n);
	printf("%s\n",s);
}
