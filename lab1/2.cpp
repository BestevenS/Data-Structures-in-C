#include <stdio.h>
#define N 10
int main()
{
	int pin[N];
	for(int i=0; i<N; i++)
	{
		printf("Give the argument %d of array: ",i+1);
		scanf("%d", pin+i);
	}
	printf("\n\n\n");
	for(int i=0; i<N; i++)
	{
		printf("The number %d argument of array is: %d\n", i+1, pin[i]);
	}
	return 0;
}
