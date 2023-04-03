#include<stdlib.h>
#include<stdio.h>
#define size 10
int main()
{

//char s[size]={"kernelmas"};
//printf("%s\n",s);

//char s[]={'a','b','c'};
//printf("%s\n",s); %s format specifier

//char s[1]="kerssssssssssssssssssssssssssssssnel"; //o/p-k   warning: initializer-string for array of chars is too long
//printf("%s\n",s);


//char s[]="kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk";The %[^\n] format specifier is used to read input from the user until a newline character is encountered. 
//printf("%[^\n]s\n",s);

/*char s[7]="kernel";
//s[0]='mas';//warning: multi-character character constant [-Wmultichar]
s[0]='a';
printf("%s\n",s);*/


/*for(i=0;i<10;i++)
{
scanf("%s",s[i]); segmentation fault
}
*/

/*char s[5]={'f','m','e','o'};
for(i=0;s[i]!=0;i++)
{
printf("%s\n",s[i]); //segmentation fault C string is not a single value like an integer or float, so a loop would need to be used to iterate over the characters in the string.
}*/

//memory allocation

//char s[10];//static
//char s[]={"kerne"};//dynamic

//char *p=(char*)malloc(10*sizeof(char));// The contents of this memory block are not guaranteed to be zeroed out or set to any particular value, and can contain random data.
//printf("%s\n",p);

//char *p=(char *)calloc(10,sizeof(char));//The calloc function initializes the allocated memory block with zero values, which in the case of a string means that the first character of the string will be set to \0.
//printf("%s\n",p);


}
