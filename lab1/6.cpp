#include <stdio.h>

#define N 10

float avg(float *);

int main()
{
	float a, c[N];
	for(int i = 0; i < N; i++)
	{
		printf("%d/%d: ", i+1, N);
		scanf("%f", c+i);
	}
	
	printf("The avg is: %f", avg(c));
	
	return 0;
}
float avg(float *c)
{
	float x = 0.0;
	for(int i = 0; i < N; i++)
	{
		x = c[i] + x;
	}
	x = x / N;
	return x;
}
