#include<stdio.h>
void reverse(char *s,char *p)
{
    static char temp;
    
    if(s>=p)
    return;
    
    temp=*s;
    *s=*p;
    *p=temp;
    
    reverse(s+1,p-1);
}

int main()
{
    
    char s[]="mirafra technologies";
    int i=0;
    for(i=0;s[i]!='\0';i++);
    i=i-1;
    
    reverse(s,&s[i]);
    printf("%s",s);
}
