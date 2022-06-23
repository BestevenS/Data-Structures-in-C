#include <stdio.h>
#define N 3
int s(int pin[][N]);	//elegxos summetrikou
int t(int pin[][N]);	//elegxos trigwnikou
int ar(int pin[][N]);	//elegxos an einai araios
main()
{
	int i, j, array[N][N];
	for (i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			printf("array[%d][%d]: ", i, j);
			scanf("%d", array[i] + j);
		}
		printf("\n");
	}
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
			printf("array[%d][%d] = %d\t", i, j, array[i][j]);
		printf("\n");
	}
	if(s(array))
	{
		printf("The array is symmetric!!!\n");
		if(t(array)==1)
			printf("The array is upper triangular!!!\n");
		else if(t(array)==-1)
			printf("Τhe array is lower triangular!!!\n");
	}
	if(ar(array))
		printf("The array is sparse!!!");
}
int s(int pin[N][N])	//sumetrikos
{
	int i, j, x=0, b=0;
	if (N == N)
	{
		printf("The array is quadratic!!!\n");
		for(i = 0; i < N; i++)
		{
			for(j = 0; j < N; j++)
			{
				b++;
				if(pin[i][j] == pin[j][i])
				{
					x++;
				}
			}
		}
		if(x == b)
		{
			return 1;
		}
	}
	return 0;
}
int t(int pin[N][N])	//trigwnikos
{
	int i, j, d = 0, a = 0, b = 0, c = 0;
	for(i = 0; i < N; i++)
		for(j = 0; j < N; j++)
		{
			if(j > i)
			{
				b++;
				if(!pin[i][j])
					a++;
			}
			if(j < i)
			{
				d++;
				if(!pin[i][j])
					c++;
			}
		}
	if(a == b)
		return 1;
	if(c == d)
		return -1;
	return 0;
}
int ar(int pin[N][N])
{
	int i, j, a = 0, x = N * N;
	for (i = 0; i < N; i++)
		for(j = 0; j < N; j++)
		{
			if (pin[i][j] == 0)
				a++;
		}
	if (a >= (x * 80) / 100)
		return 1;
	return 0;
}
