//15-03-2023
//prime coprime

#include<stdio.h>
#include<stdlib.h>

typedef struct prime
{
	int p;
	int q;
	struct prime *next;
}s;

int isprime(int a);
s * createnode(int a,int b);
void prntll(s *h);

int main()
{
	int a,b,i,x,y,c;
	s *h=NULL,*n=NULL,*l=NULL;
	printf("enter the range\n");
	scanf("%d%d",&a,&b);
	for(i=0;i<b;i++)
	{
		x=isprime(a);
		c=a+2;
		y=isprime(c);
		if(x==1&&y==1)
		{	
			n=createnode(a,c);	
			if(!h)
			{
				h=n;
			}
			else
			{
				l->next=n;
			}
			l=n;
		}
		if(x==1&&y==0)
		{	c=0;
			n=createnode(a,c);
			if(!h)
			{
				h=n;
			}
			else
			{
				l->next=n;
			}
			l=n;
		}
	
		a++;
	}
	prntll(h);
}

void prntll(s *h)
{
	int i=1;
	printf("the prime nos in linked list are\n");
	while(h){
		printf("%d--%d-%d\n",i,h->p,h->q);
		h=h->next;
		i++;
	}
}

int isprime(int a)
{
	int i,c=0,d;
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
	if(c==0)
	{
		d=1;
	}
	else
		d=0;
	return d;
}

s * createnode(int a,int b)
{
	s*new=(s *)malloc(sizeof(s));
	new->p=a;
	new->q=b;
	return new;
}

