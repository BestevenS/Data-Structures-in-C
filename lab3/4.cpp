#include <stdio.h>

struct stype{
	int j;
	char ch[30];
	float fp;
};

typedef struct stype stype;

stype instr(stype *);

void struct_swap(stype *str1, stype *str2);
void strpr(stype);

int main()
{
	stype str1, str2;
	str1=instr(&str1);
	printf("\n");
	str2=instr(&str2);
	strpr(str1);
	strpr(str2);
	struct_swap(&str1, &str2);
	strpr(str1);
	strpr(str2);

	return 0;
}
void strpr(stype str)
{
	printf("int j: %d\n", str.j);
	printf("char ch[30]: %s\n", str.ch);
	printf("float fp: %f\n", str.fp);
}
void struct_swap(stype *str1, stype *str2)
{
	stype temp;
	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}
stype instr(stype *str)
{
	printf("int j: ");
	scanf("%d", &str->j);
	fflush(stdin);
	printf("char ch[30]: ");
	scanf("%s", str->ch);	//gets(str->ch);
	fflush(stdin);
	printf("float fp: ");
	scanf("%f", &str->fp);
	return *str;
}
