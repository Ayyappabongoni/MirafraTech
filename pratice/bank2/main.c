#include"header.h"
int main()
{
	int ch,a=1,c=0;
	struct account *H=NULL;
	while(a){
		printf("1.admin\t2.user\t3.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:H=admin_fun(H);
			       printf("return addres from admin_fun %p\n",H);
			       break;
			case 2:if(c==0){
				       H=user_fun(NULL);
				       printf("return addres from user_fun %p\n",H);
				       c++;			       }
			       else{
				       H=user_fun(H);
				       printf("return addres from admin_fun %p\n",H);
			       }
			       break;
			case 3:a=0;
			       break;
			default:printf("enter the correct options only\n");
				break;
		}
	}
	printf("***THANK YOU***\n");
	printf("***VISIT AGAIN***\n");
}
