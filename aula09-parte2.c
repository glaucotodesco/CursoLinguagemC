#include <stdio.h>
#define TAM 10

int main(){
	
	int i;
	float numero, soma=0, media;	
	
	i=0;
	while(i < TAM){
		printf("\nDigite um numero: ");
		scanf("%f", &numero);
		
		soma =  soma + numero;
		i++;
	}
	
	media = soma / TAM;
	printf("\nA media dos numeros digitados e = %.2f",media);
	
	return 0;
	
}
