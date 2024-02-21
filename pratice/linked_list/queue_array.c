/*First-In-First-Out (FIFO) order.
  Enqueue (or Push): Adding an element to the rear (end) of the queue.
  Dequeue (or Pop): Removing the element from the front of the queue.
  Peek (or Front): Viewing the element at the front of the queue without removing it.
IsEmpty: Checking if the queue is empty.
IsFull: Checking if the queue is full (applicable in the case of a fixed-size array-based queue).
 */

#include<stdio.h>
#define size 5
int s[size];
int f=-1,r=-1,n=0,i=0;
char a;

void Enqueue()
{
	if(r==size-1)
		printf("queue is full\n");
	else
	{
		if(r==-1)
		{
			r=0,f=0;
		}
		printf("enter the element\n");
		scanf("%d",&s[r]);
		r++;
	}
}

int Dequeue()
{
	if(f==size-1){
		printf("queue is empty\n");
	}
	f++; 
}

void peek()
{
	printf("fornt element is %d- %d\n",f,s[f]);
}

void IsEmpty()
{
	if(r==-1){
		printf("queue is empty\n");
	}
queue in c using linked list
	else{
		printf("queue is not empty\n");
	}
}

void IsFull()
{
	if(r==size-1){
		printf("queue is full\n");
	}
	else{
		printf("queue is not full\n");
	}
}

int main()
{
	while(1){
		printf("1.Enqueue(push),2.Dequeue(pop),3.peek,4.IsEmpty,5.Isfull\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:Enqueue();
			       break;
			case 2:Dequeue();
			       break;
			case 3:peek();
			       break;
			case 4:IsEmpty();
			       break;
			case 5:IsFull();
			       break;
		}
		printf("do u want to continue y/n\n");
		scanf(" %c",&a);
		if(a=='n')
			break;
	}
	for(i=f;i<=r;i++)
	{
		printf("%d- %d\n",i,s[i]);
	}
}
