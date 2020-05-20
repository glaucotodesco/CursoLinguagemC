#include <stdio.h>
#define LIN 2
#define COL 3
int main()
{
	int m[LIN][COL];
	int i,j;
	
	for(i=LIN-1; i >= 0; i--)
	{
		for(j=0; j < COL; j++)
		{
			printf("Digite um valor para m[%i][%i]: ", i, j);
			scanf("%i", &m[i][j]);
		}
	}

	printf("\n");
	for(i=0; i < LIN; i++)
	{
		for(j=0; j < COL; j++)
		{
			printf("m[%i][%i] = %i     ", i, j, m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
