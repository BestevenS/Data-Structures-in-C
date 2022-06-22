#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 10
#define N 20
main()
{
	char x[N],*pin[MAX];
	int z=0;
	for(int i=0; i<MAX; i++)
	{
		printf("%di: ",i+1);
		gets(x);
		if(strlen(x)==0)
			break;
		pin[i]=(char *)malloc(sizeof(char)*strlen(x));
		strcpy(pin[i],x);
		x[0]={'\x0'};
		printf("%s",x);
		z++;
	}
	printf("\n");
	for(int i=0; i<z; i++)
	{
		printf("%s\n",pin[i]);
	}
}
