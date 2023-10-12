#include"header.h"
struct account *admin_fun(struct account *H)
{
	struct account *old=H;
	struct account *del=H;
	printf("address in admin_fun is %p\n",old);
	int a=0,u_password,b=0,c=0,x,d=1,D=1,B;
	int ID,A;
	printf("admin Id-1010\npass-12345\n");
	while(D){
		printf("please enter username and password\n");
		scanf("%d%d",&A,&B);
		if((A==1010)&&(B=12345))
		{
			while(d){
				printf("welcome sir\n_____1.select account\t2.details of accounts\t3.exit____\n");
				scanf("%d",&a);
				switch(a)
				{
					case 1:printf("->->->please select acconut ID and password<-<-<-\n");
					       scanf("%d%d",&ID,&u_password);
					       while(H!=NULL)
					       {
						       if((H->password==u_password)&&(H->ID==ID))
						       {c++;
							       printf("1.block\t2.unblock\t3.close account\t4.exit\t5.details of accounts\n");
							       scanf("%d",&b);
							       switch(b)
							       {
								       case 1:x=block(ID,u_password,H);
									      if(x==0)
										      printf("*****BLOCK COMPLETED*****\n");
									      break;
								       case 2:x=unblock(ID,u_password,H);
									      if(x==1)
										      printf("*****UNBLOCK COMPLETED*****\n");
									      break;
								       case 3:old=delete(del);
									      break;
								       case 4:d=0;
									      break;
								       case 5:printf("username-%s\nid-%d\npassword-%d\nDOB-%d\nplace%s\nbalance%d\nstatus%d\n",H->username,H->ID,H->password,H->DOB,H->place,H->balance,H->status);
									      break;
							       }
						       }
						       H=H->next;
					       }
					       if(c==0)
					       {
						       printf("please enter correct details\n");
					       }
					       c=0;
					       break;
					case 2:print_details(H);
					       break;
					case 3:d=0;
					       break;
				}
			}


			D=0;
		}
		else
		{
			printf("please enter correct details\n");
		}
	}
	return old;
}

int block(int ID,int u_password,struct account *H)//blocking the account
{int a;
	if((H->password==u_password)&&(H->ID==ID))
	{
		H->status=0;
		a=0;
	}
	return a;
}
int unblock(int ID,int u_password,struct account *H)//blocking the account
{int a;
	if((H->password==u_password)&&(H->ID==ID))
	{
		H->status=1;
		a-1;
	}
	return a;
}
