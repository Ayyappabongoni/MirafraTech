#include<stdio.h>
#include<string.h>
int main()
{
//char s[4]="ker";
//char d[7]="master";

//char s[7]="master";
//char d[4]="ker";

//char s[10]="kernelmas";
//char d[5]="hello";

//char s[5]="kerne";
//char d[10];

char s[10]="kernelmas";
 char d[10]="xxx";

printf("before\n");
printf("dest:%s\nsource:%s\n",d,s);
char *p=strcpy(d,s);

printf("pointer:%s\n",p);
printf(" dest:%s\n",d);
printf(" sour:%s\n",s);
}
