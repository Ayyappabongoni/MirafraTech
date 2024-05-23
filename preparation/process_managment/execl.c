#include<stdio.h>
#include<unistd.h>
int main()
{
char *path="/home/km/kmmt01esd01/Mirafra2/MirafraTech/preparation/process_managment/fork";

char *argv[]={path,"./fork",NULL};

execl(path,argv[1],(char *)0);
}
