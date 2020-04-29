#include <stdio.h>
#define TAM 10

int main(){
	
	int i;
	float numero, soma=0, media;	
	
	i=0;
	do{
		printf("\nDigite um numero: ");
		scanf("%f", &numero);
		
		soma =  soma + numero;
		i++;
	}while(i < TAM);  
	
	media = soma / TAM;
	printf("\nA media dos numero digitados e = %.2f",media);
	
	return 0;
	
}
