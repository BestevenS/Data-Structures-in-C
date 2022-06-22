#include <stdio.h>
#include <string.h>
#include <conio.h>
#define N 20
struct funds{
	char name[20];
	float poson;
};
typedef struct funds funds;
void instr(funds *);
float athroisma(funds *,char);
main(){
	char ch;
	float x;
	funds persons[N];
	instr(persons);
	ch=getch();
	x=athroisma(persons,ch);
	printf("\n\n%f",x);
}
float athroisma(funds *pin,char c)
{
	float x=0;
	for(int i=0; i<N; i++)
	{
		if(c==pin[i].name[0])
			x=pin[i].poson+x;
	}
	return x;
}
void instr(funds *pin)
{
	int i;
	for(i=0; i<N; i++)
	{
		printf("Name: ");
		gets(pin[i].name);
		printf("poson: ");
		scanf("%f",&pin[i].poson);
		fflush(stdin);
	}
}
