#include <stdio.h>
#define LIN 4
#define COL 5
int main()
{
	int m[LIN][COL];

	m[0][0] = 10;
	m[0][1] = 20;
	scanf("%i", &m[2][3]);
	
	printf("\n%i", m[0][0]);
	printf("\n%i", m[0][1]);
	printf("\n%i", m[2][3]);
	
	return 0;
}
