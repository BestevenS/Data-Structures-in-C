#include <stdio.h>
#define N 10
main()
{
	int i=0,x,y,pin[N];
	printf("Dwse ton akeraio: ");
	scanf("%d",&x);
	y=x;
	while(y!=0)
	{
		pin[i]=y%2;
		y=y/2;
		i++;
	}
	printf("To %d sto dekadiko einai -> ");
	for(int j=i-1; j>=0; j--)
		printf("%d",pin[j]);
}
