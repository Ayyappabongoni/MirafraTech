#include<unistd.h>
#include<stdlib.h>

int main()
{
char *p="/home/km/kmmt01esd01/Mirafra2/MirafraTech/preparation/hello";
execlp(p,"hello",(char *)NULL);
return 0;
}
