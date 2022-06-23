#include <stdio.h>

#define N 10

void input(int *);
void addarray(int *,int *,int *);
void display(int *);

int main()
{
	int pin1[N],pin2[N],pin3[N];
	
	input(pin2);
	input(pin3);
	addarray(pin1,pin2,pin3);
	display(pin1);

	return 0;
}
void display(int *p)
{
	for(int i=0; i<N; i++)
	{
		printf("%d/%d: %d\n", i+1, N, p[i]);
	}
}
void addarray(int *p,int *p1,int *p2)
{
	for(int i=0; i<N; i++)
	{
		p[i]=p1[i]+p2[i];
	}
}
void input(int *p)
{
	for(int i=0; i<N; i++)
	{
		printf("%d/%d: ",i+1,N);
		scanf("%d",p+i);
	}
	
	printf("Full array!!!\n");
}
