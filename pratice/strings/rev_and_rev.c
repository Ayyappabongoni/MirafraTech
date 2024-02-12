/*
dabaredyh morf ma ihba si eman ym
hyderabad from am abhi is name my
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char *p,int i,int j);
int main()
{
    
    char s[100]="my name is abhi am from hyderabad";
    
    
    int i=0,j=0;
    i=strlen(s)-1;
    
    reverse(s,i,j);
    printf("%s\n",s);
    
    for(i=0,j=0;i<=strlen(s);i++)
    {
        if((s[i]==' ')||(s[i]=='\0'))//check for space and null
        {
        reverse(s,i-1,j);
        j=i+1;//update the index 
        }
        
    }
    printf("%s",s);
}

void reverse(char *p,int i,int j)
{
    char ch;
    for(i,j;j<i;i--,j++)
    {
        ch=p[i];
        p[i]=p[j];
        p[j]=ch;
    }
}
