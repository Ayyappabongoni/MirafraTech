#include<stdio.h>
#include<stdlib.h>


struct node
{
	int id;
	struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;

struct node * create_node()
{
	struct node *new=(struct node*)malloc(sizeof(struct node));
	printf("enter the node data \n");
	scanf("%d",&new->id);
	new->next=NULL;

	return new;
}

void insert()
{
	struct node *new=create_node();

	if(front==NULL && rear==NULL)
	{
		front=rear=new;//for first node is assign to both front and rear
	}
	else
	{
		rear->next=new;//front second node assign node to last(roar)
		rear=new;//update new node as rear so for next node new will be rear
	}
}

void delete()
{

//	struct node *temp=front;
	if(front==NULL && rear==NULL)
		printf("list is empty\n");
	else
	{
		struct node *temp=front;
		front=front->next;
		free(temp);
	}
}

void display()
{
	if(front==NULL && rear==NULL)
	{
		printf("list is empty\n");
	}

	else
	{struct node *old=front;
		while(front!=NULL)
		{
			printf("%d ",front->id);
			front=front->next;
		}
		front=old;
	}
}
int main()
{
	int a=0;
	while(a!=5)
	{
		printf("enter 1.insert 2.delete 3.display 4.exit\n");
		scanf("%d",&a);

		switch(a){

			case 1:insert();
			       break;

			case 2:delete();
			       break;

			case 3:display();
			       break;

			case 4:a=5;
			       break;
		}

	}
}
