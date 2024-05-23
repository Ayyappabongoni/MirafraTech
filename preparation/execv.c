#include<stdlib.h>
#include<unistd.h>

int main()
{
char *p="/home/km/kmmt01esd01/Mirafra2/MirafraTech/preparation/hello";
char *s[]={p,"hello",(char *)NULL};
execvp(p,s);

}
