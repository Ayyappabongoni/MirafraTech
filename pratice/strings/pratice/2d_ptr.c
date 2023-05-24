#include<stdio.h>

void function(char (*p)[][10])//pointer to an array
{
	int i;
	printf("fun\n");
	for(i=0;i<5;i++)
	{
		printf("%s\n",(*p)[i]);
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
	function(&s);
}
