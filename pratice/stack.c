#include<stdio.h>
#define size 5
int push(int s[],int t);
int pop(int s[],int t);
int main()
{
	int s[size];
	int t=0;
	int a;
	while(1)
	{
		printf("1=push 2-pop 3-quit\n");
		scanf("%d",&a);
		if(a==1)
		{
			t=push(s,t);
				
		}
		if(a==2)
		{
			t=pop(s,t);
			
		}
		if(a==3)
		{
			goto EXIT;
		} 
	}
EXIT:printf("THANK YOU\n");

}

int push(int s[],int t)
{
	if(t==size-1){
		printf("stack is full\n");
	}

else{
	int n;
	printf("enter the value to push\n");
	scanf("%d",&n);
	s[t]=n;
	t++;
}
return t;
}

int pop(int s[],int t)
{
	if(t==-1)
		printf("stack is empty\n");
	else{
		printf("pop %d\n",s[t-1]);
		t--;
	}
	return t;
}
