#include<stdio.h>
void function(char s[][10])
{
	int i;
	printf("fun\n");
	for(i=0;i<5;i++)
	{
		printf("%s\n",s[i]);
	}
}

int main()
{

	char s[5][10];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s",s[i]);

	}
	function(s);
}
