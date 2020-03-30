/*
 Receber um intervalo (dois valores) e em seguida um n�mero. 
 Informar se o n�mero est� dentro, fora ou nas extremidades do intervalo. 
 Por exemplo:
		Em um intervalo de 1 a 3:
		 0 est� fora,
         2 est� dentro
		 1 est� em uma extremidade do intervalo.
*/

#include <stdio.h>

int main()
{
	int inicio, fim, numero, aux;
	
	printf("Digite o inicio: ");
	scanf("%i", &inicio);
	
	printf("Digite o fim: ");
	scanf("%i", &fim);
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	if(inicio > fim){
		aux = fim;
		fim = inicio;
		inicio = aux;
	}
	
	
	
	if(numero < inicio || numero > fim){
		printf("\nFora do intervalo");
	}
	else{
		if(numero > inicio && numero < fim){
			printf("\nDentro do intervalo");
		}
		else{
			printf("\nExtremidades do intervalo");
		}
	}
	
	return 0;
}
