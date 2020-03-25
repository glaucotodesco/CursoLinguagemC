#include <stdio.h>

int main(){

	int numero;
	
	printf("Digite um numero (de 1 a 10): ");
	scanf("%i", &numero);
	
	if(numero >= 1  && numero <= 10)
	{
		printf("\nCorreto!!!\n");
	}
	else
	{
		printf("\nErro, numero fora da faixa.\n");
	}
	
		
	return 0;
}
