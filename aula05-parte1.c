#include <stdio.h>

int main(){

	int x=10, y=20, z=30;
	
	int exp1 = x > 10;
	int exp2 = y < z;
	
	printf("\n%i", exp1);
	printf("\n%i", exp2);
	
	int saida1 = exp1 && exp2;
	int saida2 = exp1 || exp2;
	
	printf("\n%i", saida1);
	printf("\n%i", saida2);
	
	return 0;
}
