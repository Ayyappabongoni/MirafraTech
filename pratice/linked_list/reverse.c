#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *createnode()
{
	struct node *p=(struct node *)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&p->data);
	p->next=NULL;
	return p;
}

void printll(struct node *h)
{
	printf("data is\n");
	while(h!=NULL)
	{
		printf("%d\n",h->data);
		h=h->next;
	}
}

struct node *reverse(struct node*h)
{
	struct node *prevnode,*currentnode,*nextnode=NULL;
	prevnode=0;
	currentnode=nextnode=h;
	while(nextnode!=0)
	{
		nextnode=nextnode->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
	h=prevnode;
return h;
}
int main()
{
	struct node *n;
	struct node *h=NULL,*l=NULL;
	char a;
	while(1)
	{
		n=createnode();
		if(h==NULL)
		{
			h=n;
		}
		else
		{
			l->next=n;
		}
		l=n;
		printf("do u want to continue y/n\n");
		scanf(" %c",&a);
		if(a=='n')
			break;
	}
	printll(h);
	h=reverse(h);
	printf("the rev list is \n");
	printll(h);
}
