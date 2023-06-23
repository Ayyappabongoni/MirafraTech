#include <stdio.h>
#include<stdlib.h>
struct s
{
    int a;
    char ch;
    float f;
    union ss
    {
        int A;
        char C;
    }u;    
};
int main()
{
    struct s *ss=(struct s *)malloc(sizeof(struct s));
  /*  ss->a=10;https://www.onlinegdb.com/online_c_compiler#tab-stdin
    ss->ch='a';
    ss->f=1.00;
    ss->u.A=100;
    ss->u.C='A';*/
    //printf("enter the values\n");
    
    scanf("%d %c %f %d %c",&ss->a,&ss->ch,&ss->f,&ss->u.A,&ss->u.C);
    printf("%d\n %c\n %f\n %d\n %c\n",ss->a,ss->ch,ss->f,ss->u.A,ss->u.C);
}

