//15-03-2023
//store prime nos in linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct prime
{
	int p;
	struct prime *next;
}s;

int isprime(int a);
s * createnode(int a);
void prntll(s *h);

int main()
{
	int a,b,i,x;
	s *h=NULL,*n=NULL,*l=NULL;
	printf("enter the range\n");
	scanf("%d%d",&a,&b);
	for(i=0;i<b;i++)
	{
		x=isprime(a);
		if(x==1)
		{
			n=createnode(a);
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
		printf("%d-%d\n",i,h->p);
		h=h->next;
		i++;
	}
}

int isprime(int a)
{
	int i,c=0,b;
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
	if(c==0)
	{
		return b=1;
	}
	else
		return b=-1;
	return b;
}

s * createnode(int a)
{
	s*new=(s *)malloc(sizeof(s));
	new->p=a;
	return new;
}

