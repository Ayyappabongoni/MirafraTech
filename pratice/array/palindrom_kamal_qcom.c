#include<stdio.h>
#define MAX_SIZE 256

int main ()
{
	// char s[] = "malayalam";
	//char s[]="geeksforgeeks";
	char s[]="geeksogeeks";


	int a[MAX_SIZE] = { 0 }, i;


	for (i = 0; s[i] != '\0'; i++)
	{
		a[(int) s[i]] += 1;		//increment the value after accesing the index

	}

	int c = 0;
	for (i = 0; i < MAX_SIZE; i++)
	{
		if (a[i] % 2 != 0)
			c++;
	}
	if (c == 1)
		printf ("yes");
	else
		printf ("no");
}

