#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y;
	char c;
	
	while(1){
		printf("Give the first number: ");
		scanf("%d", &x);
		
		printf("Give me the calculation: ");
		fflush(stdin);
		c = getchar();
		
		printf("Give the second number: ");
		scanf("%d", &y);
		
		if(c == '+')
			printf("%d + %d = %d",x,y,x+y);
		else if(c == '-')
			printf("%d - %d = %d",x,y,x-y);
		else if(c == '*')
			printf("%d * %d = %d",x,y,x*y);
		else if(c == '/')
			if(y!=0)
				printf("%d / %d = %d",x,y,x/y);
			else
				printf("Second number cannot be 0...");
		printf("\nPress Q to quit or Enter to continue.. ");
		fflush(stdin);
		c = getchar();
		if(c == 'Q')
			break;
		printf("\n");
	}
	printf("\nHave a nice day");
}
