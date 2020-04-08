/* 
	Receber a quantidade de vezes que o calculo do dobro sera realizado
	Receber um numero e calcular o dobro a quantidade de vezes desejada
*/

#include <stdio.h>

int main(){
	
	int i, numero, dobro, vezes;
	
	printf("Quantas vezes voce quer calcular o dobro? ");
	scanf("%i", &vezes);
	
	for( i=0 ; i<vezes ; i++ )
	{
		printf("\nDigite um numero: ");
		scanf("%i",&numero);
		
		dobro = numero * 2;
		
		printf("O dobro de %i = %i.\n", numero, dobro);
	
	}
	
		
	return 0;
}
