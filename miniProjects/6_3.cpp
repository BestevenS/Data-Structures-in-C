#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
struct node {
	char name [30];
	int am;
	float poson;
	struct node *next;
};

void display (struct node *);
struct node *searchName(struct node *, char *);

int main () {
	struct node *head, *curr, *ptr, *search;
	char nol[8], mat[20];
	int num;
	 /* dimiourgia -eisagosi stoixeion sti lista */
	head = (struct node *) malloc (sizeof (struct node));
	curr = ptr = head;
	curr->next = NULL;
	printf ("DWSTE ARI8MO MHTRWOY ");
	gets (nol);
	num = atoi (nol);
	while (num > 0) {
		curr->am = num;
		printf ("DWSTE ONOMA ");
		gets (curr->name);
		printf ("DWSTE POSON ");
		gets (nol);
		curr->poson=atof(nol);
		curr->next=(struct node *) malloc (sizeof (struct node));
		curr = curr->next;
		curr->next = NULL;
		printf ("DWSTE EPOMENO ARI8MO MHTRWOY ");
		gets (nol);
		num=atoi (nol);
	}
	while (ptr->next != curr) /* grammi 34 */
		ptr = ptr->next;
		ptr->next = NULL;
		free (curr); /* grammi 37 */
		curr = NULL; /* grammi 38 */
		display (head);
		
		printf("dose name gia anazitis\n");
		gets(mat);
		search=searchName(head, mat);
		if(search!=NULL)
			printf ("ONOMA %s\t ARI8MOS MHTRWOY %5d\t POSON %10.2f\n", search->name, search->am, search->poson);
		else
			printf("ANYPARKTO ONOMA\n");
	}
	
void display (struct node *head) {
	struct node *curr; 
	
	/* emfanisi ton stoixeion tis listas */
	printf ("\nEMFANISH TWN STOIXEIWN THS LISTAS\n");
	curr=head;
	while (curr != NULL){
		printf ("ONOMA %s\t ARI8MOS MHTRWOY %5d\t POSON %10.2f\n", curr->name, curr->am, curr->poson);
		curr = curr->next;
	}
}

struct node *searchName(struct node *ihead, char *mat){
	struct node *curr;
	
	curr=ihead;
	while (curr != NULL){
		if(strcmp(curr->name,mat)==0){
			return curr;
		}
		curr = curr->next;
	}
	return NULL;
}
