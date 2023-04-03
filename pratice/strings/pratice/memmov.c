#include <stdio.h>
#include <string.h>
  
int main()
{
    //char s[10] = "Geeksasdf";
    //char d[6] = "miraf";
  
//char s[5]="kerne";
//char d[10];

char s[10]="kernelmas";
char d[4]="xxx";

    printf("str1 before memmove \n");
	printf("dest:%s\nsource:%s\n",d,s);
  
    /* Copies contents of str2 to sr1 */
    memmove(d, s, sizeof(s));
  
    puts("\nstr1 after memmove ");
    printf("after\n");
	printf("dest:%s\nsource:%s\n",d,s);
  
    return 0;
}
