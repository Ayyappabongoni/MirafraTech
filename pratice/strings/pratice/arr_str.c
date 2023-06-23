#include<stdio.h>
int main()
{
	//char s[3][10]={"kernel","masters","institute"};
	char s[3][10];
	//	char s[3][10];
	/*scanf("%s",s[0]);
	  scanf("%s",s[1]);
	  scanf("%s",s[2]);*/
	int i=0,j=0;
	for(i=0;i<3;i++)
	{
		scanf("%s",s[i]);
	}

	for(i=0;i<3;i++)
	{
		printf("%s\n",s[i]);
	}
	/*	printf("%s\n",s[0]);
		printf("%s\n",s[1]);
		printf("%s\n",s[2]);
	//	int i=0;
	for(i=0;s[1][i]!=0;i++)//[1][i]is s[1]
	{
	s[0][i]=s[1][i];//copy s[0]=s[1]
	}
	s[0][i]=0;//s[0]=null

	printf("after str cpy\n");
	printf("%s\n",s[0]);
	printf("%s\n",s[1]);
	printf("%s\n",s[2]);
	 */
}
