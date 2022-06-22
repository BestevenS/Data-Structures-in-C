#include <stdio.h>
#define N 3
float avg(float *);
main()
{
	float a,c[N];
	for(int i=0; i<N; i++)
	{
		printf("%d/%d: ",i+1,N);
		scanf("%f",c+i);
	}
	a=avg(c);
	printf("O mesos oros einai: %f",a);
}
float avg(float *c)
{
	int i;
	float a,x=0.0;
	for(i=0; i<N; i++)
	{
		x=c[i]+x;
	}
	a=x/N;
	return a;
}
