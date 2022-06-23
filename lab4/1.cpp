#include <stdio.h>
#include <stdlib.h>

void prnums(int, int *);

int main()
{
	int num, *p;
	printf("Dwse num: ");
	scanf("%d", &num);
	p=(int*)calloc(sizeof(int), num);
	prnums(num, p);
	for(int j = 0; j < num; j++)
	{
		printf("\nGive a number: ");
		scanf("%d", &p[j]);
	}
	prnums(num, p);
	
	return 0;
}
void prnums(int i, int *p)
{
	printf("\n");
	for(int j = 0; j < i; j++)
	{
		printf("pin[%d]: %d\n", j, p[j]);
	}
	printf("\n");
	for(int j = 0; j < 30; j++)
		printf("-");
}
