//decimal to binary

#include <stdio.h>
#define N 10
int main()
{
	int i=0, decimal, y, pin[N];
	printf("Give a decimal: ");
	scanf("%d",&decimal);
	y=decimal;
	while(y!=0)
	{
		pin[i]=y%2;
		y=y/2;
		i++;
	}
	printf("%d in binary is -> ", decimal);
	for(int j=i-1; j>=0; j--)
		printf("%d",pin[j]);

	return 0;
}
