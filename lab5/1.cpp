#include <stdio.h>
#include <conio.h>
#define N 10
int push(int,int*);
void pr(int,int *);
int pop(int,int *);
char menu();
int empty(int h);
int full(int h);
main() {
	int pin[N];
	char ch='A';
	int head;
	head=0;
	while(ch!='E') {
		ch=menu();
		if(ch=='U'||ch=='O'||ch=='P') {
			if(ch=='U')
				head=push(head,pin);
			if(ch=='O')
				head=pop(head,pin);
			if(ch=='P')
				pr(head,pin);
		}
	}
	pr(head,pin);
}
int empty(int h) {
	if (h==0)
		return 1;
	return 0;
}
int full(int h) {
	if(h==N)
		return 1;
	return 0;
}
int push(int head,int *p) {
	if(!full(head)) {
		printf("\npin[%d]: ",head);
		scanf("%d",p+head);
		head=head+1;
	} else
		printf("\nI stoiva einai gemati!");
	return head;
}
int pop(int head,int *p) {
	if(!empty(head)) {
		printf("\npin[%d]: %d",head,p[head-1]);
		head=head-1;
		return head;
	} else
		printf("\nI stoiva einai adeia!\n");
	return head;
}
char menu() {
	char c;
	printf("\nU.push\n");
	printf("O.pop\n");
	printf("P.print\n");
	printf("E.Exit\n");
	c=getche();
	return c;
}
void pr(int head,int *p) {
	int i;
	for(i=0; i<head; i++)
		printf("\n%do: %d\n",i+1,p[i]);
}
