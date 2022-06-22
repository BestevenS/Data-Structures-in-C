#include <stdio.h>
#include <string.h>
#define N 30
#define M 20
struct one{
	int ak;
	char pin[N];
};
typedef struct one one;
struct two{
	int data;
	int mat[M];
	one item;
	one melos;
};
typedef struct two two;
void fillone(one *);
void filltwo(two *);
main()
{
	int x;
	one person;
	two memb;
	fillone(&person);
	filltwo(&memb);
	strcpy(memb.item.pin,person.pin);
	x=strlen(person.pin);
	printf("strlens: %d",x+strlen(memb.item.pin));
	if(strlen(memb.melos.pin)+x<=N)
	{
		int j=0;
		for(int i=x; i<N; i++)
		{
			person.pin[i] = memb.melos.pin[j];
			j++;
		}
		printf("\n%d\n",x+strlen(memb.melos.pin));
		printf("%s",person.pin);
	}
	else 
		printf("\nDwsate perissoterous chars apo %d",N);
	memb.melos=memb.item;
}
void fillone(one *st)
{
	printf("int ak: ");
	scanf("%d",&st->ak);
	fflush(stdin);
	printf("char pin[%d]: ",N);
	gets(st->pin);
}
void filltwo(two *st)
{
	printf("int data: ");
	scanf("%d",&st->data);
	printf("int mat[%d]\n",M);
	for(int i=0; i<M; i++)
	{
		printf("mat[%d]: ",i+1);
		scanf("%d",st->mat+i);
	}
	fillone(&(st->item));
	fillone(&(st->melos));
}
