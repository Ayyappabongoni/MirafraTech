#include <sys/types.h>
       #include <sys/ipc.h>
       #include <sys/msg.h>
#include<stdio.h>


struct node
{
long int a;
char s[10];
};
struct node A={123,"mirfra"};
int main()
{
int id=msgget(100,0666|IPC_CREAT);
msgsnd(id,&A,sizeof(A),0);

}
