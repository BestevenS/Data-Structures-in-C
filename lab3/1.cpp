#include <stdio.h>
#include <string.h>

struct stype{
	int j;
	char ch[30];
	float fp;
};

struct stype strmake(struct stype, int *);

void strprint(struct stype, int *);
void strsw(struct stype *, struct stype *);

int main()
{
	int i = 1, j = 1;
	struct stype str1, str2, temp;
	
	str1 = strmake(str1, &i);
	str2 = strmake(str2, &i);
	
	printf("\n");
	
	strprint(str1, &j);
	strprint(str2, &j);
	j = 1;
	
	strsw(&str1, &str2);
	
	printf("\n\nstrsw: complete\n\n");
	
	strprint(str1, &j);
	strprint(str2, &j);
	j = 1;

	return 0;
}

struct stype strmake(struct stype str, int *i)
{
	if(*i != 1)
		printf("\n");
	printf("str%d.\nint str%d.j: ", *i, *i);
	scanf("%d", &str.j);
	fflush(stdin);
	printf("char str%d.ch[30]: ", *i);
	scanf("%s", str.ch);	// gets(str.ch);
	fflush(stdin);
	printf("float str%d.fp: ", *i);
	scanf("%f", &str.fp);
	*i = *i+1;
	return str;
}
void strprint(struct stype str, int *i)
{
	printf("str%d.\nint str%d.j: %d\n", *i, *i, str.j);
	printf("char str%d.ch[30]: ", *i);
	puts(str.ch);
	printf("str%d.fp: %f\n", *i, str.fp);
	*i = *i + 1;
}
void strsw(struct stype *str1, struct stype *str2)
{
	struct stype temp;
	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}
