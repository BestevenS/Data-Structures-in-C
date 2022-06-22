#include <stdio.h>
#define N 3
int max(int *,int);
main()
{
	int list[N],i,k,x;
	for(i=0; i<N; i++)
	{
		printf("Dwse timi sti lista i 0 gia telos: ");
		scanf("%d",&x);
		if(x==0)
			break;
		list[i]=x;
		k=i;
	}
	x=max(list,k);
	printf("To megisto stoixeio tis lista einai %d",x);
}
int max(int *list,int k)
{
	int meg=list[0];
	for(int i=1; i<k; i++)
	{
		if(meg<list[i])
			meg=list[i];
	}
	return meg;
}
