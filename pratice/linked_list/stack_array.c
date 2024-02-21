//a stack is a data structure that follows the Last-In-First-Out (LIFO)

#include<stdio.h>
#define size 5
int push(int *p,int t)
{
	int a;
	if(t==size-1)
		printf("stack is full\n");
	else
	{
		printf("enter the element to push\n");
		scanf("%d",&a);
		p[t]=a;
		t++;//nxt index
	}
	return t;
}

int pop(int *p,int t)
{
	if(t==-1)
		printf("stack is empty\n");
	else
	{
		t--;//decrese index
	}
	return t;
}

void pip(int *p,int t)
{

	if(t==-1)
		printf("stack is empty\n");
	else
		printf("the top element is\n%d\n",p[t-1]);//0-4
}

int main()
{
	int s[size];
	int t=-1,a,i=0;
	char ch;
	while(1){
		printf("1.push 2.pop 3.pip\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:t=push(s,t);
			       break;
			case 2:t=pop(s,t);
			       break;
			case 3:pip(s,t);
			       break;
		}
		printf("do u want to conitnue y/n\n");
		scanf(" %c",&ch);
		if(ch=='n')
			break;
	}
	for(i=t;i>=0;i--)
	{
		printf("%d- %d\n",i,s[i]);
	}
}
