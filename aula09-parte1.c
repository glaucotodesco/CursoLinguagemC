#include <stdio.h>
#define TAM 1000

int main(){
	
	int i;
	float numero, soma=0, media;	
	
	for(i=0; i < TAM; i++){
		printf("\nDigite um numero: ");
		scanf("%f", &numero);
		
		soma =  soma + numero;
	}
	
	media = soma / TAM;
	printf("\nA media dos numeros digitados e = %.2f",media);
	
	return 0;
	
}
