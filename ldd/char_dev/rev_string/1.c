#include <stdio.h>
#include<string.h>

int main()
{
	char s[]="mirafra technologies hyderabad";
	int i=0;
	char b[40];
	int c=0;
	for(i=0;s[i]!=0;i++)
	{

		c++;
	}

	int j=0;
	printf("%d\n",c);

	for(j=0,i=c-1;i>=0;i--,j++)
	{
		b[j]=s[i];

	}
	printf("%s\n",b);

	return 0;
}

