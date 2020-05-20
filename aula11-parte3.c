#include <stdio.h>
#define LIN 2
#define COL 3

int main()
{
	int m[LIN][COL];
	int i,j;
	
	
	m[0][0] = 10; 	m[0][1] = 20; 	m[0][2] = 30;
	m[1][0] = 40; 	m[1][1] = 50; 	m[1][2] = 60;
	
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
