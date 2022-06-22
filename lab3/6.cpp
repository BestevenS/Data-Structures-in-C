#include <stdio.h>
#define N 3
struct funds{
	char name[20];
	float poson;
};
typedef struct funds funds;
funds reading(funds);
void display(funds *);
main()
{
	int i;
	funds persons[N],x;
	for(i=0; i<N; i++)
	{
		persons[i]=reading(x);
		fflush(stdin);
	}
	printf("\nO pinakas gemise!");
	display(persons);
}
void display(funds *pin)
{
	printf("\n\n\n");
	for(int i=0; i<N; i++)
	{
		printf("name: %s \nposon: %f\n",pin[i].name,pin[i].poson);
	}
}
funds reading(funds x)
{
	printf("Name: ");
	gets(x.name);
	printf("poson: ");
	scanf("%f",&x.poson);
	return x;
}
