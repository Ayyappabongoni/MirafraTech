#include <stdio.h>
#include<stdlib.h>
int main()
{
    
    char **arr=(char **)calloc(10,sizeof(char *));

for(int i=0;i<5;i++)
{
    
    arr[i]=(char *)malloc(10*sizeof(char));
}
    for(int i=0;i<5;i++)
    {
        
        scanf("%s",arr[i]);
    }
    
    for(int i=0;i<5;i++)
    {
        printf("%s\n",arr[i]);
        free(arr[i]);
        
    }
    free(arr);
}
