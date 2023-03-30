#include<stdio.h>
int myatoi(char str[]);
int main()
{
	char str[10];
	printf("Enter a string\n");
	scanf("%s",str);
	int x=myatoi(str);
	printf("%d\n",x);
}
int myatoi(char str[])
{
	int res=0,i=0,sign=1;
	if(str[0]=='-')
	{
		sign=-1;
		i++;
	}
	for(;str[i]!=0;i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			res=res*10+(str[i]-'0');
		}
		else
			break;
	}
	res=res*sign;
	return res;
}
