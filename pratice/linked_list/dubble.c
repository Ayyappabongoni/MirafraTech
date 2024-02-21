#include<stdio.h>
#include<stdlib.h>

struct abhi
{
	int no;
	struct abhi *next;
	struct abhi *prev;
};

struct abhi *createnode(void)
{
	struct abhi *new=(struct abhi *)malloc(sizeof(struct abhi));
	printf("enter no and name\n");
	scanf("%d",&new->no);
	new->next=NULL;
	new->prev=NULL;
	return new;
}
void printll(struct abhi *H)
{
	while(H!=NULL)
	{
		printf("no is %d\n",H->no);
		H=H->next;
	}
}

int main()
{
	struct abhi *H=NULL,*L=NULL,*N=NULL;
	char c;
	int b=1,a;

	while(1)
	{
		N=createnode();
		if(H==NULL)
		{
			H=N;//update first node 1 time
		}
		else
		{
			L->next=N;//update last nose every time
			N->prev=L;
		}
		L=N;//update last node
		printf("do you want to continue y/n\n");
		scanf(" %c",&c);
		if(c=='n')
		{
			break;
		}

	}
	printll(H);
}
