/*

   dabaredyh seigolonhcet arfarim
   hyderabad technologies mirafra
 */

#include<stdio.h>
void function(char *s,int i,int j);
int main()
{
	char s[]="mirafra technologies hyderabad";

	int i=0,j=0;
	char temp;

	for(i=0;s[i]!='\0';i++);


	int a=i;
	for(i=i-1,j=0;j<i;i--,j++)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	printf("%s\n",s);

	for(i=0,j=0;i<=a;i++)
	{
		if((s[i]==' ') || (s[i]=='\0'))
		{
			function(s,i-1,j);//removing space i
			j=i+1;//updating i index for nxt function call
		}
	}
	printf("%s",s);

}

void function(char *s,int i,int j)
{
	char temp;
	for(i,j;j<i;i--,j++)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}

}

