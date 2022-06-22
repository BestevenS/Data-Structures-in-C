#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

struct node {
	char name[30];
	int am;
	float poson;
	struct node *next;
};

void display(struct node *);
struct node * eisagwgh(struct node *,int);

main () {
	struct node *head,*curr,*ptr;
	char nol[15];
	int pos;
	
	head=(struct node *)malloc(sizeof(struct node));
	curr=ptr=head;
	curr->next=NULL;
	printf("dwse Am:");
	gets(nol);
	curr->am=atoi(nol);
	
	while(curr->am>0) {
		printf("dwse onoma:");
		gets(curr->name);
		printf("dwse poson:");
		gets(nol);
		curr->poson=atof(nol);
		curr->next=(struct node *)malloc(sizeof(struct node));
		curr=curr->next;
		curr->next=NULL;
		printf("dwse Am:");
		gets(nol);
		curr->am=atoi(nol);
	}
	
	while(ptr->next!=curr) {
		ptr=ptr->next;
	}
	ptr->next=NULL;
	free(curr);
	curr=NULL;
	
	display(head);
	head=eisagwgh(head,pos);
	display(head);
}

void display(struct node *head) {
	struct node *curr;
	
	curr=head;
	
	while(curr!=NULL) {
		printf("AM:%d\nOnoma:%s\nPoson:%f\n" , curr->am , curr->name , curr->poson);
		curr=curr->next;
	}
}

struct node * eisagwgh(struct node *head , int pos) {
	struct node *curr,*ptr,*dkt;
	int k,num,ak=0;
	
	ptr=curr=head;
	
	ptr=(struct node *)malloc(sizeof(struct node));
	ptr->next=NULL;
	printf("dwse am:");
	scanf("%d" , &ptr->am);
	fflush(stdin);
	printf("dwse onoma:");
	gets(ptr->name);
	printf("dwse poson:");
	scanf("%f" , &ptr->poson);
	fflush(stdin);
	
	printf("dwse pos -1:");
	scanf("%d" , &pos);
	fflush(stdin);
	
	if(pos==-1) {
		while(curr->next!=NULL) {
			curr=curr->next;
		}
		curr->next=ptr;
	}
	return head;
}
