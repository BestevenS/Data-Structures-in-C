#include <stdio.h>
#define N 3
main()
{
	int pin[N];
	for(int i=0; i<N; i++)
	{
		printf("Dwse to %do stoixeio: ",i+1);
		scanf("%d",pin+i);
	}
	printf("\n\n\n");
	for(int i=0; i<N; i++)
	{
		printf("To %do stoixeio: %d\n",i+1,*pin+i);
	}
}
