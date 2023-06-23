#include<stdio.h>
int main()
{
int arr[10]={1,2,3,4,5,6,0,8,9,10};
//int *p=arr;
int *p=&arr[9];

/*printf("%d\n",++*p); //acess value and increment value no index increment
printf("%d\n",(*p)++);
printf("%d\n",++*p);*/ 


//printf("%d %d %d\n",*++p,*p++,*++p);//right to lift 1,*(++p) 2,*p(++) 3,*(++p) index increment then value
//printf("%d\n",*p);



printf("%d %d %d\n",*p--,--*p,*p--);//right to lift 
//printf("%d\n",*p);
}
