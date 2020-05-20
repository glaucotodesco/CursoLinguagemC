#include <stdio.h>
#define LIN 2
#define COL 3

int main()
{
	int m[LIN][COL] = {
						 {10, 20, 30},
						 {40, 50, 60}
					  };
	int i,j, soma, somaTotal=0;
	
	for(i=0; i < LIN; i++)
	{
		soma =0;
		for(j=0; j < COL; j++)
		{
			soma += m[i][j];
		}
		somaTotal += soma;
		printf("\nSomatorio da linha %i = %i", i+1, soma);
	}
	
	printf("\n");
	for(j=0; j < COL; j++)
	{
		soma =0;
		for(i=0; i < LIN; i++)
		{
			soma += m[i][j];
		}
		printf("\nSomatorio da coluna %i = %i", j+1, soma);
	}
	
	printf("\nSomatorio da matriz %i", somaTotal);
	return 0;
}
