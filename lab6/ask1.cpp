#include <stdio.h>
#include <stdlib.h>
struct node{
	char name[20];
	int am;
	float op;
	struct node* next;
};
typedef  struct node node;
node *root;
void insert();
void delet();
void print();
main()
{
	char ch;
	while(1)
	{
		printf("\nu: instert");
		printf("\nd: delete");
		printf("\np: print");
		printf("\ne: end");
		scanf("%c",&ch);
		if(ch=='u')
			insert();
		else if(ch=='d')
			delet();
		else if(ch=='p')
			print();
		else if(ch=='e')
			break;
	}
	print();
}
void print()
{
	node *curr;
	curr=root;
	while(curr->next)
	{
		printf("\nname: %s\n",curr->name);
		printf("am: %d\n",curr->am);
		printf("op: %f\n",curr->op);
	}
}
void delet()
{
	if(!root->next){
		printf("keni lista...");
		exit(0);
	}
	node *curr,*curr1;
	curr=root;
	curr1=curr->next;
	while(curr1->next)
	{
		curr1=curr1->next;
		curr=curr->next;
	}
	curr->next=NULL;
}
void insert()
{
	node *curr;
	curr=root=(node*)malloc(sizeof(node));
	curr==root;
	while(curr->next)
	{
		curr=curr->next;
	}
	printf("Dwse am: ");
	scanf("%d",&curr->am);
	if((curr->am)<=0)
		exit(0);
	printf("Dwse onoma: ");
	scanf("%s",curr->name);
	printf("Ofeilomeno poson: ");
	scanf("%d",&curr->op);
}
