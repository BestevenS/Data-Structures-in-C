#include <stdio.h>
#include <string.h>
#define R 5
#define C 20
main()
{
	int max=0,i=0,x=0,j;
	char pin[R][C];
	while(i<R)
	{
		printf("Dwse %di sumboloseira: \n",i+1);
		gets(pin[i]);
		x+=strlen(pin[i]);
		if(max<strlen(pin[i]))
			max=strlen(pin[i]);
		if(strlen(pin[i])==0)
			break;
		i++;
	}
	printf("O arithmos twn xaraktirwn pou dwthike einai: %d\n",x);
	for(j=0; j<i; j++)
	{
		puts(pin[j]);
	}
	printf("I megaluteri sumboloseira eixe megethos %d",max);
	
}
