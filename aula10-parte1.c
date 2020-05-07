#include <stdio.h>

int main(){
	int x;
	int y[5];
	
	x = 10;
	scanf("%i", &x);
	
	y[0] = 7;
	y[1] = 3;
	y[2] = 9;
	y[3] = 18;
	y[4] = 26;
	scanf("%i", &y[3]);
	
	printf("\nx    = %i", x );
	printf("\ny[0] = %i", y[0]);
	printf("\ny[1] = %i", y[1]);
	printf("\ny[2] = %i", y[2]);
	printf("\ny[3] = %i", y[3]);
	printf("\ny[4] = %i", y[4]);
	
	return 0;
}

