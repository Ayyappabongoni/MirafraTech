extern int printf (const char *__restrict __format, ...);


const static int a=10;//store in .rodata
//const static int b;//store in .bss
const extern int c=5;//store in .rodata
const static int d;//store in .bss
int main()
{
const int e=2;//store in stack
const int f;//store in stack

const static int b;//store in .bss
int *p=(int *)&b;
printf("%d %d\n",*p,b);

*p=10;
printf("%d %d\n",*p,b);
}
