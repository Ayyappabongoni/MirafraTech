#include<stdio.h>
#include<unistd.h>

int main()
{
char *path="/home/km/kmmt01esd01/Mirafra2/MirafraTech/preparation/process_managment/fork";
char *args[]={path,"./fork",NULL};
int x=execv(path,args);
}



/*int execv (const char *path, char *const argv[]); */

/*#include<stdio.h>
#include<unistd.h>
int main()
{
	char *path="/bin/ls";
	char *args[]={path,"-a",NULL};
	int x=execv(path,args);
	if(x=-1)
	{
		printf("exec is failed\n");
	}
}*/
