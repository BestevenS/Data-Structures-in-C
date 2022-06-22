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

main ( ){
	struct node *head, *curr, *ptr;
	char nol[8];
	int num;
	
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
		rintf ("DWSTE POSON ");
		gets (nol);
		curr->poson = atof (nol);
		curr->next = (struct node *) malloc (sizeof (struct node));
		curr = curr->next;
		curr->next = NULL;
		printf ("DWSTE EPOMENO ARI8MO MHTRWOY ");
		gets (nol);
		num = atoi (nol); 
	}
	while (ptr->next != curr) /* G?a??? 34 */
		ptr = ptr->next;
	ptr->next = NULL;
	free (curr); /* G?a??? 37 */
	curr = NULL; /* G?a??? 38 */
	display (head);
}

void display (struct node *head){
	struct node *curr;

	printf ("\nEMFANISH TWN STOIXEIWN THS LISTAS\n");
	curr = head;
	while (curr != NULL) {
		printf ("ONOMA %s\t ARI8MOS MHTRWOY %5d\t POSON %10.2f\n", curr->name, curr->am, curr->poson);
		curr = curr->next; 
	}
}
