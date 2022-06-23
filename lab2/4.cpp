#include <stdio.h>
#include <string.h>

#define R 5
#define C 20

int main()
{
	int max = 0,i = 0,x = 0, j;
	char pin[R][C];
	while(i < R)
	{
		printf("Give the number %d string: \n",i+1);
		scanf("%s", pin+i);		// gets(pin[i]);
		fflush(stdin);
		x += strlen(pin[i]);
		if(max < strlen(pin[i]))
			max = strlen(pin[i]);
		if(strlen(pin[i]) == 0)
			break;
		i++;
	}
	printf("The number of characters you give is: %d\n",x);
	for(j = 0; j < i; j++)
	{
		puts(pin[j]);
	}

	printf("The biggest string has %d length", max);
	
	return 0;
}
