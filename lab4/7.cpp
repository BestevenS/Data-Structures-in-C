#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 3
char *inp(char *);
void spaces();
void swit(char *,char *);
main()
{
	char *pin[max];
	for(int i=0; i<max; i++)
	{
		printf("Dwse %di sumb: ",i+1);
		pin[i]=inp(pin[i]);
	}
	spaces();
	for(int i=0; i<max; i++)
		printf("%p\n",pin[i]);
	spaces();
	for(int i=0; i<max; i++)
		printf("\n%s",pin[i]);
	swit(pin[0],pin[max-1]);
	spaces();
	for(int i=0; i<max; i++)
		printf("%p\n",pin[i]);
	spaces();
	for(int i=0; i<max; i++)
		printf("\n%s",pin[i]);
}
void swit(char *p,char *m)
{
	char temp[200];
	strcpy(temp,p);
	strcpy(p,m);
	strcpy(m,temp);
}
char *inp(char *pin)
{
	char p[200];
	gets(p);
	pin=(char *)malloc(sizeof(char)*strlen(p));
	strcpy(pin,p);
	return pin;
}
void spaces()
{
	printf("\n");
	for(int i=0; i<30; i++)
		printf("-");
	printf("\n");
}
