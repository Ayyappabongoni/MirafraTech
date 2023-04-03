#include<stdio.h>
//global or local lifetime is still end of the pgm
//default value is 0

/*static char s[]={"kernel"};  //global
int fun();
int main()
{
int a=5;
fun(a);//functionc call is must
printf("main\n");
}

int fun(int a)
{
s[0]='x';//modifi is possible
printf("%s\n",s);
}*/
		
/*int fun(char);
int main()
{
static char s[]={"kernel"};//local cannot acess out of loop
fun(s);
printf("main\n");
}

int fun(char s)
{
printf("%s\n",s);
}
*/
