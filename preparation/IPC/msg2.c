#include <sys/types.h>
       #include <sys/ipc.h>
       #include <sys/msg.h>
#include<stdio.h>

struct node{
long a;
char s[10];
};
struct node A;
int main()
{
int key=msgget(100,0666|IPC_CREAT);
msgrcv(key,&A,sizeof(A),0,0);

printf("data is \n %ld %s\n",A.a,A.s);
msgctl(100,IPC_RMID,NULL);
}

