#include"header.h"
struct account *user_fun(struct account *H)
{
	int ch,a=1,b,c=0;
	struct account *L=NULL,*new=NULL;
	while(a){
		printf("1.new user\t2.existing user\t3.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:new=new_user();
			       /*linked lst*/
			       if(H==NULL)
			       {
				       H=new;
			       }
			       else
			       {
				       L->next=new;
			       }
			       L=new;//last node details
			       break;

			case 2:H=existing_user(H);
			       break;
			case 3:break;
			default:printf("choose the above options only\n");
		}
		printf("do you want to continue 1.yes 2.no\n");
		scanf("%d",&b);
		if(b==2){
			a=0;
		}
		else
			continue;
	}
	printf("address in user_fun is %p\n",H);
	return H;
}

struct account *new_user(void)
{
	struct account *new=(struct account *)malloc(sizeof(struct account));//account variable
	printf("enter 1.username\n2.DOB\n3.place\n4.password\n");
	scanf("%s%d%s%d",new->username,&new->DOB,new->place,&new->password);
	printf("your ID is %d\npassword is %d\n",new->DOB,new->password);
	new->balance=0;
	new->status=1;
	new->ID=new->DOB;
	new->next=NULL;
	return new;
}

struct account *existing_user(struct account *H)
{
struct account *old=H;
	printf("exist user %s %d\n",H->username,H->password);
	int a;
	int ID;
	int password;
	printf("1.login\t2.exit\n");
	scanf("%d",&a);
	if(a==1){
		printf("enter ID and password\n");
		scanf("%d%d",&ID,&password);
		while(H!=NULL)
		{
			if( (ID==(H->ID)) && (password==(H->password)) )
			{
				printf("welcome %s\n",H->username);
				details(H);
				break;
			}
			H=H->next;
		}
	}
return old;
}

void details(struct account *h)
{
	int a=0,b,c,x=1;
	c=is_block(h);
	if(c==1){
		while(x){
			printf("......Deposite and withdraw.....\n1.deposit\t2.withdraw\t3.delete account\t4.exit\t5.details\t6.check balance\n");
			scanf("%d",&a);
			switch(a)
			{
				case 1:printf("enter amount to deposit\n");
				       scanf("%d",&b);
				       h->balance=h->balance+b;
				       b=0;
				       printf("******THANK YOU VISIT AGIAN******\n");
				       break;
				case 2:printf("enter amount to withdraw	");
				       scanf("%d",&b);
				       h->balance=h->balance-b;
				       b=0;
				       printf("******THANK YOU VISIT AGIAN******\n");
				       break;
				case 3://h=delete();
				       break;
				case 4:x=0;
				       break;
				case 5:printf("/*WELCOME*/\nusername- %s\nid- %d\npassword- %d\nDOB- %d\nplace- %s\nbalance- %d\nstatus- %d\n",h->username,h->ID,h->password,h->DOB,h->place,h->balance,h->status);
				       break;
				case 6:printf("balance in your account- %d\n",h->balance);

			}
			//return H;
		}
	}
	else{
		printf("this account is blocked\n");
	}
}


struct account *delete(struct account *H)
{
	struct account *temp=NULL;
	struct account *old=H;
	int ID;
	int password;
	printf("please conform your ID and password\n");
	scanf("%d%d",&ID,&password);
	printf("thank you for conforming your details are\nID-%d\npassword-%d\n",ID,password);
	if(H->ID==ID)
	{
		temp=H->next;//first node
		free(H);
		printf("*****your account is deleted*****\n");
		return temp;
	}
	else
	{
		while(ID!=H->next->ID)//middle node
		{
			H=H->next;
		}
		temp=H->next;
		H->next=temp->next;
		free(temp);
		printf("*****your account is deleted*****\n");
	}
		return old;
}
