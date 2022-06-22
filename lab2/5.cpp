#include <stdio.h>
#define N 3
int t(int pin[][N]);	//tautotikos
main()
{
	int i,j,pinax[N][N];
	for(i=0; i<N; i++)
		for(j=0; j<N; j++)
		{
			printf("Dwse to %do stoixeio tis grammis %d: ",j+1,i+1);
			scanf("%d",pinax[i]+j);
		}
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			printf("pinax[%d][%d]: %d\t",i,j,pinax[i][j]);
		}
		printf("\n");
	}
	if(t(pinax))
		printf("\nTautotikos!!!");
}
int t(int pin[][N])		//tautotikos
{
	int x=0,i;
	if(N==N)
	{
		printf("Einai tetragwnikos!!!");
		for(i=0; i<N; i++)	//i+=N+1
			if(pin[i][i])
				x++;
	}
	if(x==N)
		return 1;
	return 0;
}
