#include<stdio.h>
struct node
{
	int a;
	char ch;
	float fd;
};
struct node A[2];

struct node * function(struct node A[])
{
	printf("function\n");
	printf("%d %c %f\n",A[0].a,A[0].ch,A[0].fd);
	printf("%d %c %f\n",A[1].a,A[1].ch,A[1].fd);

	A[0].a=000;

	return A;   
}
int main(){

	scanf("%d %c%f",&A[0].a,&A[0].ch,&A[0].fd);
	printf("enter second data\n");
	scanf("%d %c%f",&A[1].a,&A[1].ch,&A[1].fd);

	printf("%d %c %f\n",A[0].a,A[0].ch,A[0].fd);
	printf("%d %c %f\n",A[1].a,A[1].ch,A[1].fd);
	struct node *B=function(A);
	printf("after return main\n");
	printf("%d %c %f\n",B[0].a,B[0].ch,B[0].fd);
	printf("%d %c %f\n",B[1].a,B[1].ch,B[1].fd);
}
