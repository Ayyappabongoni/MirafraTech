#include<stdio.h>
int add(int a,int b){
const int xx=a+b;//asign when insalized
static int bb;//only with in the loop cannot acess in main
return xx;
}

int main()
{
int a=5,b=6;
int x=add(a,b);
printf("%d",x);
}
