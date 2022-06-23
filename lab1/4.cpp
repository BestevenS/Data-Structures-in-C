#include <stdio.h>
#define N 10
int max(int *,int);
int main()
{
	int list[N], i, k = 0, x;
	for(i=0; i<N; i++)
	{
		printf("Give int to list\nGive 0 to end: ");
		scanf("%d",&x);
		if(x == 0)
			break;
		list[i] = x;
		k = i + 1;
	}

	printf("The max argument of list is %d", max(list, k));

	return 0;
}
int max(int *list, int k)
{
	int bigger = list[0];
	for(int i = 1; i < k; i++)
	{
		if(bigger < list[i])
			bigger = list[i];
	}
	return bigger;
}
