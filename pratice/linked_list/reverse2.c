#include <stdio.h>
#include<stdlib.h>

struct node{
	int id;
	struct node *next;
};

struct node * function()
{
	struct node *a=(struct node *)malloc(sizeof(struct node));
	printf("enter id\n");
	scanf("%d",&(a->id));
	a->next=NULL;
	return a;
}
struct node *printlll(struct node *H)
{
	struct node *old=H;
	while(H!=NULL)
	{
		printf("%d\n",H->id);
		H=H->next;
	}
	return old;
}

struct node *reverse(struct node *H)
{
	struct node *current=H,*prev=NULL,*temp=NULL;

	while(current!=NULL)
	{
		temp=current->next;
		current->next=prev;
		prev=current;
		current=temp;
	}
	return prev;
}

int main()
{char ch;
	struct node *H=NULL,*N=NULL,*P=NULL;

	while(1)
	{
		N=function();
		if(H==NULL)
		{
			H=N;
		}
		else
		{
			P->next=N;
		}
		P=N;
		printf("do you want to continue\n");
		scanf(" %c",&ch);
		if(ch=='y')
			break;
	}
	H=printlll(H);
	H=reverse(H);
	printf("reverse linked list\n");
	printlll(H);
}
