#include <stdio.h>

#define N 5

int t(int array[][N]);	//tautotikos

int main()
{
	int i, j, array[N][N];
	for(i = 0; i < N; i++)
		for(j = 0; j < N; j++)
		{
			printf("Give the %d int of %d array: ",j+1,i+1);
			scanf("%d", array[i]+j);
		}
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			printf("array[%d][%d]: %d\t", i, j, array[i][j]);
		}
		printf("\n");
	}
	if(t(array))
		printf("\nTautotikos!!!");
	
	return 0;
}
int t(int array[][N])		//tautotikos
{
	int x = 0, i;
	if(N == N)
	{
		printf("Quadratic!!!");
		for(i = 0; i < N; i++)	//i+=N+1
			if(array[i][i])
				x++;
	}
	if(x == N)
		return 1;
	return 0;
}
