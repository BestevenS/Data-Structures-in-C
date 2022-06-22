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
struct node * insert_list(struct node *, int);

int main () {
	struct node *head, *curr, *ptr;
	char nol[8];
	int num, pos;
	 /* dimiourgia -eisagosi stoixeion sti lista */
	head = (struct node *) malloc (sizeof (struct node));
	curr = ptr = head;
	curr->next = NULL;
	printf ("DWSTE ARI8MO MHTRWOY (i 0 gia na stamatisei to programma) ");
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
	while (ptr->next != curr) 
		ptr = ptr->next;
	ptr->next = NULL;
	free (curr); 
	curr = NULL; 
	display (head);
	
	printf("Dose 0(gia eisagosgi stin arxi tis listas)\n"
		 "dose -1(gia eisagosi sto telos tis listas)\n"
		 " Dose pos>0 (eisagosgi meta ton pos komvo)\n"
		 "Dose pos<-1 (gia eisagogi meta ton komvo me num number)\n");
	scanf("%d", &pos);
	fflush(stdin);
	head=insert_list(head, pos); 
		
	//ektyposi stoixeion listas	
	curr=head;
	while(curr!=NULL){
		printf("%s - %d - %f \n", curr->name, curr->am, curr->poson);
		curr = curr->next;
	}
	system("pause");
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

struct node * insert_list(struct node *ihead, int pos){
	struct node *curr, *temp;
	char nol[8];
	int num, i, num1=0;
		
	temp=(struct node *)malloc(sizeof(struct node));
	printf ("DWSTE ARI8MO MHTRWOY ");
	gets (nol);
	num = atoi (nol);
	temp->am = num;
	printf ("DWSTE ONOMA ");
	gets (temp->name);
	printf ("DWSTE POSON ");
	gets (nol);
	temp->poson=atof(nol);
	
	curr=ihead;
	if(pos==0){	//1 - eisagogi komvou stin arxi tis listas
		temp->next=curr;
		ihead=temp;
	}else if(pos==-1){	//2 - eisagogi komvou sto telos tis listas
		while(curr!=NULL){//diatrexoume olous tous komvous
			if(curr->next==NULL){  //vriskoume ton teleytaio komvo
				curr->next=temp; // kanoume ton teleytaio iso me enan neo (diladi ton temp)
				temp->next=(struct node *)NULL; //gionoume ton neo mas komvo - efoson einai o teleytaios
			}
			curr=curr->next;
		}
	}else if(pos>0){//3 - evresi pos komvou, oste na topothetithei meta to pos enas neos
		for(i=1;i<pos;i++) 
			curr=curr->next; //vriskoume ton pos (diladi ton proigouemno apo ayton pou tha diagrafei)
		temp->next=curr->next;
		curr->next=temp;
	}else if(pos<-1){	//4 - 
		printf ("pos<-1: DWSTE NUM (o opoios antistoixei se idi yparxon airthmo mitroou): \n");
		scanf("%d", &num1);
		fflush(stdin);
		
		while(curr!=NULL){
			if(num1==curr->am){ //evresi komvou opou isxuei num1==curr->am komvou
				temp->next=curr->next;
				curr->next=temp; 
				break;
			}
		curr=curr->next;
		}
		
		
	}else{
		printf("Error\n");
	}
	
return ihead;
}
