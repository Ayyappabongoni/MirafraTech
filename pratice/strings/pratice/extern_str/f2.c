#include<stdio.h>

extern char s[];
int fun(int a)
{

//s[10]="xxxxxx";//not possible
s[0]='x';//modification is possible
printf("%d\n",a);
printf("%s\n",s);
}
