#include <stdio.h>
#include <string.h>

#define N 5
#define M 20

struct one{
	int ak;
	char pin[30];
};

typedef struct one one;

struct two{
	int data;
	int mat[N];
	one item;
	one melos;
};

typedef struct two two;

void prdom(one);
void prdom2(two);
void fillone(one *);
void filltwo(two *);

int main()
{
	one person, *ptr;
	two memb, *dkt;
	
	fillone(&person);
	filltwo(&memb);
	
	ptr = &person;
	dkt = &memb;
	
	printf("Give ptr->pin: ");
	gets(ptr->pin);
	strcpy(dkt->item.pin, ptr->pin);
	
	printf("Give data of dkt: ");
	scanf("%d", &dkt->data);
	
	printf("Give int value to 2nd place of array mat");
	scanf("%d", &dkt->mat[2]);
	
	prdom(*ptr);
	
	dkt->item = person;
	
	dkt->melos = dkt->item;
	
	printf("\n%d\n", strlen(dkt->melos.pin));
	printf("%s\n", person.pin);
	strcat(person.pin, dkt->melos.pin);
	printf("%s\n", person.pin);

	return 0;
}
void prdom2(two p)
{
	printf("2.%d: \n");
	for(int i = 0; i < N; i++)
		printf("%d\n", p.mat[i]);
	prdom(p.item);
	prdom(p.melos);
}
void prdom(one p)
{
	printf("1.%d:\t%s", p.ak,p.pin);
}
void fillone(one *st)
{
	printf("int ak: ");
	scanf("%d", &st->ak);
	fflush(stdin);
	printf("char pin[%d]: ", N);
	gets(st->pin);
}
void filltwo(two *st)
{
	printf("int data: ");
	scanf("%d", &st->data);
	printf("int mat[%d]\n", M);
	for(int i = 0; i < M; i++)
	{
		printf("mat[%d]: ", i + 1);
		scanf("%d", st->mat + i);
	}
	fillone(&(st->item));
	fillone(&(st->melos));
}
