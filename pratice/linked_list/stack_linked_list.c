#include<stdio.h>
#include<stdlib.h>


struct node
{
	int id;
	struct node *next;
};

struct node *top=NULL;

struct node * create_node()
{
	struct node *new=(struct node*)malloc(sizeof(struct node));
	printf("enter the node data \n");
	scanf("%d",&new->id);
	new->next=NULL;

	return new;
}

void push()
{
	struct node *new=create_node();
		new->next=top;
		top=new;

}

void pop()
{
	struct node *temp;
	if(top==NULL)
	{
		printf("empty\n");
	}
	else
	{
		temp=top;
		top=top->next;
		free(temp);
	}
}

void display()
{

	struct node *temp=top;//strore loaction

	if(top==NULL)
	{
		printf("empty\n");
	}
	else
	{
		while(top!=NULL)
		{
			printf("%d ",top->id);
			top=top->next;
		}
	}
top=temp;//ypdate location
}
	
int main(){	
	int a=0;
	while(a!=5)
	{
		printf("enter 1.push 2.pop 3.display 4.exit\n");
		scanf("%d",&a);

		switch(a){

			case 1:push();
			       break;

			case 2:pop();
			       break;

			case 3:display();
			       break;

			case 4:a=5;
			       break;
		}

	}
}
