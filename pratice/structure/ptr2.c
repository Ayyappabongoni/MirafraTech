#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct s
{
    int a;
    char ch;
    float f;
    char *pp;
    char *name;
    union ss
    {
        int A;
        char C;
    }u;    
};

void function(struct s *p)
{
    printf("in function\n");
    printf("%s\n%s\n",p->pp,p->name);
    printf("%d\n %c\n %f\n %d\n %c\n",(*p).a,(*p).ch,p->f,p->u.A,p->u.C);
    
}
int main()
{
    struct s *ss=(struct s *)malloc(sizeof(struct s));
    ss->pp=(char *)malloc(20*sizeof(char));
    ss->name=(char *)malloc(20*sizeof(char));
    strcpy(ss->pp,"svjkv");
    strcpy(ss->name,"abhi");
    ss->a=10;https://www.onlinegdb.com/online_c_compiler#tab-stdin
    ss->ch='a';
    ss->f=1.00;
    ss->u.A=100;
    ss->u.C='A';
    //printf("enter the values\n");
    
  //  scanf("%d %c %f %d %c",&ss->a,&ss->ch,&ss->f,&ss->u.A,&ss->u.C);
    printf("%s\n%s\n",ss->pp,ss->name);
    printf("%d\n %c\n %f\n %d\n %c\n",ss->a,ss->ch,ss->f,ss->u.A,ss->u.C);
    function(ss);
    
}
