#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct account
{
        char username[30];
        int DOB;
	int ID;
        char place[20];
        int password;
        int balance;
        int status;
        struct account *next;
};



void details(struct account *);
struct account *existing_user(struct account *);
struct account * new_user(void);
struct account *delete(struct account *);
struct account *user_fun(struct account *);
int unblock(int,int,struct account *);
int block(int,int,struct account *);
struct account *admin_fun(struct account *);
void print_details(struct account *);
void printlll(struct account *);
int is_block(struct account *);


