#include<stdio.h>

int glob_initallized_var=10;
int glob_un_initallized_var;
int main()
{
int local_auto_var=10;
int local_auto_var2=10;

static int local_static_var=20;
}

/*Local automatic variables may not appear in assembly because the compiler can keep them in registers 
or optimize them away; they don’t have fixed storage or symbols.

gcc -save-temps file.c
*/
