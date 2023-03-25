#include<stdio.h>
#include<stdlib.h>
char function(char *p[],int a);
int compare(char p[],char q[]);
int main()
{
	int i,r=7;
	char *str[r];
	str[0]="sunday";
	str[1]="monday";
	str[2]="tuesday";
	str[3]="wednesday";
	str[4]="thrusday";
	str[5]="friday";
	str[6]="saturday";
	function(str,r);
	for(i=0;i<r;i++)
		printf("%s\n",str[i]);

}
char function(char *p[],int a)
{
	int i,j,x,y;
	char *temp;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a-i-1;j++)
		{
			x=compare(p[j],p[j+1]);
			if(x==1)
			{
				temp=p[i];
				p[i]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
}

int compare(char p[],char q[])
{int i,c,j;

	for(i=0;p[i]!=0||q[i]!=0;i++){
		if(p[i]<q[i])
		{
			c=0;
		}
		if(p[i]>q[i])
		{
			c=1;
		}
	}
	return c;
}
