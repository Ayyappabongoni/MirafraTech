#include<stdio.h>
#include<stdlib.h>
struct abhi *createnode(void);
void printll(struct abhi *H);
struct abhi *delete(struct abhi *h);
struct abhi *insert_at_position(struct abhi *h);
struct abhi *insert_before(struct abhi *h);
struct abhi *insert_after(struct abhi *h);

struct abhi
{
	int no;
	char s[15];
	struct abhi *next;
};

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
	while(b)
	{
		printf("1.delete 2.exit 3.insert_at_position 4.insert_before 5.print 6.inser_after\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:H=delete(H);
			       break;
			case 2:b=0;
			       break;
			case 3:H=insert_at_position(H);
			       break;
			case 4:H=insert_before(H);
			       break;
			case 5:printll(H);
			       break;
			case 6:H=insert_after(H);
			       break;
		}
	}
	printll(H);
}

struct abhi *createnode(void)
{
	struct abhi *new=(struct abhi *)malloc(sizeof(struct abhi));
	printf("enter no and name\n");
	scanf("%d %s",&new->no,new->s);
	new->next=NULL;
	return new;
}


void printll(struct abhi *H)
{
	while(H!=NULL)
	{
		printf("no is %d\t%s\n",H->no,H->s);
		H=H->next;
	}
}

struct abhi *delete(struct abhi *h)
{
	struct abhi *s=NULL;
	struct abhi *old=h;
	int id=0;
	printf("enter the id to delete\n");
	scanf("%d",&id);
	if(id==h->no)
	{
		s=h->next;
		free(h);
		return s;
	}
	else
	{
		while(id!=h->next->no)
		{
			h=h->next;
		}
		s=h->next;
		h->next=s->next;
		free(s);
	}
	return old;
}

struct abhi *insert_at_position(struct abhi *h)
{
	int id,i=0;
	struct abhi *old=h;
	printf("enter the position\n");
	scanf("%d",&id);
	struct abhi *s=createnode();
	if(id==1)
	{
		s->next=h;
		return s;
	}
	else
	{
		for(i=1;i<id-1;i++)
		{
			h=h->next;
		}
		s->next=h->next;
		h->next=s;
	}
	return old;
}

struct abhi *insert_before(struct abhi *h)
{
	int id=0;
	struct abhi *old=h;
	struct abhi *s=createnode();
	printf("enter the id to insert before\n");
	scanf("%d",&id);
	if(id==h->no)
	{
		s->next=h;
		return s;
	}
	else
	{
		while(id!=h->next->no)
		{
			h=h->next;
		}
		s->next=h->next;
		h->next=s;
	}
	return old;;
}

struct abhi *insert_after(struct abhi *h)
{
	int id=0;
	struct abhi *old=h;
	struct abhi *s=createnode();
	printf("enter the id to insert before\n");
	scanf("%d",&id);
	if(id==h->no)
	{
		s->next=h->next;
		h->next=s;
		return old;
	}
	else
	{
		while(id!=h->no)
		{
			h=h->next;
		}
		s->next=h->next;
		h->next=s;
	}
	return old;
}
