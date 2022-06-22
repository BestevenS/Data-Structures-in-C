#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 20
main()
{
	char *p,pin[N],mat[N];
	printf("Dwse sumboloseira: ");
	gets(pin);
	p=(char*)malloc(sizeof(char)*strlen(pin));
	printf("\n\n\np: %s",p);
	p=pin;
	printf("\n\n\np: %s\n",p);
	gets(mat);
	printf("\nmat: %s",mat);
	realloc(p,strlen(mat));
	printf("\n\n\np: %s",p);
	p=mat;
	printf("\n\n\np: %s",p);
}
