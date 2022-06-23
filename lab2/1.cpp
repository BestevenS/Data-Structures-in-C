#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 10

int better(int grades[][N],int *,int *);

int main()
{
	int grades[M][N];
	int a,b;
	int i,j,max;
	for (i = 0; i < M; i++)
    	for(j = 0; j < N; j++)
    		grades[i][j] = rand() % 11;
    for (i = 0; i < M; i++)
    {
    	for(j = 0; j < N; j++)
    		printf("grades[%d][%d] = %d \n", i, j, grades[i][j]);
    	printf("\n");
    }

    max = better(grades, &a, &b);
    printf("\n\n\nmax: grades[%d][%d] = %d", a, b, max);

	return 0;
}
int better(int grades[][N],int *a,int *b)
{
	int max=0;
	int i,j;
	for (i = 0; i < M; i++)
    	for(j=0; j<N; j++)
    		if(grades[i][j]>=max)
			{
    			max=grades[i][j];
    			*a=i;
    			*b=j;
			}
	return max;
}
