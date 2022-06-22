#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20
char *gem(char *);
main()
{
	char *pin,*mat;
	pin=gem(pin);
	mat=gem(mat);
	realloc(pin,sizeof(char)*strlen(mat));
	strcat(pin,mat);
	printf("\n%s",pin);
}
char *gem(char *pin)
{
	char p[N];
	gets(p);
	pin=(char*)malloc(sizeof(int)*strlen(p));
	strcpy(pin,p);
	return pin;
}
