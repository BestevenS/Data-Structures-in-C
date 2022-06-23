#include <stdio.h>
#define N 10

void fstore (int [ ]);
void fretrieve (int [ ]);
void fedit (int [ ]);

int main() 
{
	int array[N];
	printf("Fill the array:\n");
	fstore(array);
	fretrieve(array);
	fedit(array);
	fretrieve(array);
	return 0; 
}
void fstore (int a[ ]) 
{
	int i;
	for (i=0; i<N; i++){
		printf("array[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void fretrieve (int a[ ]) 
{
	int i;
	for (i=0; i<N; i++)
		printf("array[%d] = %d\n", i, a[i]);
	printf("\n");
}

void fedit (int a[ ])
{
	int i, q;
	for (i=0; i<N; i++)
	{
		printf ("Prev.data: array[%d] = %d\nEnter 1 to edit 0 to skip", i, a[i]);
		scanf ("%d", &q);
		if(q == 1)
		{
			printf("Enter new Value: ");
			scanf("%d", &a[i]); 
		}
	}
}