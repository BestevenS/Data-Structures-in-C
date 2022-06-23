#include <stdio.h>

#define N 5

struct student{
	int am;
	char name[30];
};

int main(){
	struct student pin[N];
	int k;
	for(k = 0; k < N; k++){
		printf("%d. AM: ", k + 1);
		gets(&pin[k].am);
		printf("Name: ");
		gets(pin[k].name);
	}
	for(k = 0; k < N; k++)
	{
		printf("%d. AM: %d\n", k + 1, pin[k].am);
		printf("1st letter of name: %c\n", pin[k].name[0]);
		printf("Name: %s\n", pin[k].name);
	}

	return 0;
}
