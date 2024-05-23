#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
	int a;
	int *p;
	char *s;
};

int main()
{
	struct node *A=(struct node *)malloc(sizeof(struct node));
	A->p=(int *)malloc(10*sizeof(int *));
	A->s=(char *)malloc(10*sizeof(char *));


	/* *(A->p)=12345;
	   strcpy(A->s,"ABHIRAM");
	 */

	/*scanf("%d %s",(A->p),A->s);
	  printf("%d %s",*(A->p),A->s);
	 */
}
