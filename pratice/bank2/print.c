#include"header.h"

void print_details(struct account *H)
{
	while(H!=NULL)
	{
		printf("username-%s\nid-%d\npassword-%d\nDOB-%d\nplace%s\nbalance%d\nstatus%d\n",H->username,H->ID,H->password,H->DOB,H->place,H->balance,H->status);
		H=H->next;
	}
}


int is_block(struct account *s)
{
	int a;
	a=s->status;

	return a;
}



void printlll(struct account *H)
{
		printf("username-%s\nid-%d\npassword-%d\nDOB-%d\nplace%s\nbalance%d\nstatus%d\n",H->username,H->ID,H->password,H->DOB,H->place,H->balance,H->status);
}
