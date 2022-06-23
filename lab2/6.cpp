#include <stdio.h>

#define N 3

int ant(int pin[][N]);

int main()
{
	int i, j, array[N][N];
	for (i = 0; i < N; i++)
	{
		printf("%d.\n",i);
		for(j = 0; j < N; j++)
		{
			printf("%d. row, %d. column:\t", i, j);
			scanf("%d", array[i]+j);
		}
	}
	for (i = 0; i < N; i++)
	{
		printf("\n%d.\n", i);
		for(j = 0; j < N; j++)
			printf("%d. row, %d. column\t", i, j);
	}
	if(ant(array))
		printf("\nThe array is antisymmetric!!!");
	else 
		printf("\nThe array isn't antisymmetric!");

	return 0;
}
int ant(int pin[][N])
{
	int a = 0, b = 0;
	if(N == N)
	{
		printf("\nThe array is quadratic!!!");
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				if(i == j)
				{
					if(pin[i][i] == 0)
						a++;
				}
				else if(pin[i][j] == -pin[j][i])
					b++;
			}
		}
		if(a == N)
			if(b == (N * N) - a)
				return 1;
		return 0;
	}
}
