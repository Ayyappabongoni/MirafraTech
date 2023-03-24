#include<stdio.h>
int fun(int a,int b)
{
return a+b;
}

int main()
{
int a=5,b=6;int x=fun(a,b);
printf("%d",x);
}


/*km@KernelMasters:~/kmmt01esd01/mirafra/pratice$ gcc -fprofile-arcs -ftest-coverage -o add add.c
km@KernelMasters:~/kmmt01esd01/mirafra/pratice$ ls
add  add.c  add.gcno  a.out  fun_pointer.c  stages.c

km@KernelMasters:~/kmmt01esd01/mirafra/pratice$ ./add
11


km@KernelMasters:~/kmmt01esd01/mirafra/pratice$ ls
add  add.c  add.gcda  add.gcno  a.out  fun_pointer.c  stages.c
km@KernelMasters:~/kmmt01esd01/mirafra/pratice$ gcov add.c
File 'add.c'
Lines executed:100.00% of 5
Creating 'add.c.gcov'

km@KernelMasters:~/kmmt01esd01/mirafra/pratice$ ls
add  add.c  add.c.gcov  add.gcda  add.gcno  a.out  fun_pointer.c  stages.c
*/

/*add.c.gcov file
-:    0:Source:add.c
        -:    0:Graph:add.gcno
        -:    0:Data:add.gcda
        -:    0:Runs:1
        -:    0:Programs:1
        -:    1:#include<stdio.h>
        1:    2:int fun(int a,int b)
        -:    3:{
        1:    4:return a+b;
        -:    5:}
        -:    6:
        1:    7:int main()
        -:    8:{
        1:    9:int a=5,b=6;int x=fun(a,b);
        1:   10:printf("%d",x);
        -:   11:}


*/
