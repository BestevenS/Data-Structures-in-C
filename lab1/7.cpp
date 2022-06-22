#include <stdio.h>
#define N 5
void sort(int *);
main()
{
	int pin[N];
	for(int i=0; i<N; i++)
	{
		printf("%d/%d: ",i+1,N);
		scanf("%d",pin+i);
	}
	sort(pin);
	printf("\n");
	for(int i=0; i<N; i++)
	{
		printf("%d/%d: %d\n",i+1,N,pin[i]);
	}
	
}
void sort(int *list)
{
	int temp;
	for(int i=0; i<N; i++)
		for(int j=0; j<N; j++)
		{
			if(list[i]<list[j])
			{
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
}
