#include<stdio.h>

union student
{
char str[10];
char ch[10];
};

int main()
{
union student s={"kernel"};
s.str[0]='x';
printf("%s\n",s.str);
printf("%s\n",s.ch);

}
