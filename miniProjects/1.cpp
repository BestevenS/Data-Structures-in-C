#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
struct node {
	char name [30];
	int AM;
	float vathmos;
	struct node *next;
};

void display (struct node *);
struct node *insert(struct node *);
main (){
	struct node *head, *curr, *ptr, *search;
	char list[8], mat[20];
	int num;
	 /* dimiourgia -eisagosi stoixeion sti lista */
	head = (struct node *) malloc (sizeof (struct node));
	curr = ptr = head;
	curr->next = NULL;
	insert(head);
	gets (list);
	num = atoi (list);
	while (num > 0) {
		curr->AM = num;
		gets (list);
		curr->vathmos=atof(list);
		curr->next=(struct node *) malloc (sizeof (struct node));
		curr = curr->next;
		curr->next = NULL;
	}
	while (ptr->next != curr) {
		ptr = ptr->next;
		ptr->next = NULL;
		free (curr); 
		curr = NULL; 
		display (head);
	}
}
struct node *insert(struct node *head){
	struct node *curr;
	curr=head;
    while(curr->next)
    {
        curr=curr->next;
    }
	printf ("DWSTE ARI8MO MHTRWOY ");
	scanf("%d",&curr->AM);
	printf ("DWSTE ONOMA ");
	gets (curr->name);
	printf ("DWSTE vathmo ");
	scanf("%f",&curr->vathmos);
}
void display (struct node *head) {
	struct node *curr; 
	curr=head;
	/* emfanisi ton stoixeion tis listas */
	printf ("\nEMFANISH TWN STOIXEIWN THS LISTAS\n");
	while (curr != NULL){
		printf ("ONOMA %s\t ARI8MOS MHTRWOY %5d\t VATHMOS %10.2f\n", curr->name, curr->AM, curr->vathmos);
		curr = curr->next;
	}
}
