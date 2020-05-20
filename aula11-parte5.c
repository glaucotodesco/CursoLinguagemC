#include <stdio.h>
#define LIN 2
#define COL 3

int main()
{
	int m[LIN][COL] = {
						 {10, 20, 30},
						 {40, 50, 60}
					  };
	int i,j;
	
	
	for(i=0; i < LIN; i++)
	{
		for(j=0; j < COL; j++)
		{
			printf("%i ", m[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}


