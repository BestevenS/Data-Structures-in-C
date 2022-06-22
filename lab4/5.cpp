#include <stdio.h>
#include <stdlib.h>
void primat(int **,int,int);
main()
{
	int k,j,n,m,num,**mat;
	scanf("%d%d",&n,&m);
	mat = (int**)malloc(n*sizeof(int));
	for(k=0; k<n; k++)
		mat[k]=(int*)malloc(m*sizeof(int));
	for(j=0; j<n; j++)
		for(k=0; k<m; k++)
		{
			printf("mat[%d][%d]: \n",j,k);
			scanf("%d",&num);
			mat[j][k]=num;
		}
	primat(mat,n,m);
}
void primat(int **mat,int n,int m)
{
	int i,j;
	printf("\n\n\n");
	for(i=0; i<n; i++)
	{
		printf("\n");
		for(j=0; j<m; j++)
		{
			printf("mat[%d][%d]: %d\t",i,j,mat[i][j]);
		}
	}
}
