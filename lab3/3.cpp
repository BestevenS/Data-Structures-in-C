#include <stdio.h>
#define N 3
struct student{
	int am;
	char name[30];
};
main(){
	struct student pin[N];
	int k;
	for(k=0; k<N; k++){
		printf("%d. AM: ",k+1);
		scanf("%d",&pin[k].am);
		fflush(stdin);
		printf("Name: ");
		gets(pin[k].name);
	}
	for(k=0; k<N; k++)
	{
		printf("%d. AM: %d\n",k+1,pin[k].am);
		printf("1o gramma onomatos: %c\n",pin[k].name[0]);
		printf("Onoma: %s\n",pin[k].name);
	}
}
