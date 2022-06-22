#include <stdio.h>
#define N 3
int ant(int pin[][N]);
main()
{
	int i,j,pinax[N][N];
	for (i=0; i<N; i++)
	{
		printf("%d.\n",i);
		for(j=0; j<N; j++)
		{
			printf("%d. grammi, %d. stili:\t",i,j);
			scanf("%d",pinax[i]+j);
		}
	}
	for (i=0; i<N; i++)
	{
		printf("\n%d.\n",i);
		for(j=0; j<N; j++)
			printf("%d. grammi, %d. stili\t",i,j);
	}
	if(ant(pinax))	//antisimetrikos
		printf("\nO pinakas einai antisummetrikos!!!");
	else 
		printf("\nO pinakas den einai antisummetrikos!");
}
int ant(int pin[][N])
{
	int a=0,b=0,i,j;
	if(N==N)
	{
		printf("\nO pinakas einai tetragwnikos!!!");
		for(i=0; i<N; i++)
		{
			for(j=0; j<N; j++)
			{
				if(i==j)
				{
					if(pin[i][i]==0)
						a++;
				}
				else if(pin[i][j]==-pin[j][i])
					b++;
			}
		}
		if(a==N)
			if(b==(N*N)-a)
				return 1;
		return 0;
	}
}
