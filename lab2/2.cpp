#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define R 5
#define C 10

int main(){
	char tmp[C];
	int i, j,v;
	char students[R][C];
	
	for (i=0; i<R; i++){
		printf("Student name: ");
		scanf("%s", students[i]);	//gets(students[i]);
		fflush(stdin);				
		//if gets(students[i]) don't run fflush(stdin);
	}	
	printf("\n\nPrint array:\n\n");
    for (i=0; i<R; i++)
		printf("%s\n", students[i]);
	printf("\n\nSorted array:\n\n");
	for (i=0; i<R-1; i++)
		for(j=i+1; j<R; j++)
			if(strcmp(students[i],students[j])>0){
				strcpy(tmp,students[j]);
				strcpy(students[j], students[i]);
				strcpy(students[i], tmp);
	    	}
   	for (i=0; i<R; i++)
		printf("%s\n", students[i]);

	return 0;
}