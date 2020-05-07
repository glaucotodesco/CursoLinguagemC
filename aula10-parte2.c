#include <stdio.h>
#define TAM 20

int main(){
	int i, v[TAM];
	
	for(i=0; i < TAM; i++)
	{
		printf("Digite um valor: ");
		scanf("%i", &v[i]);
	}
	
	printf("\nValores digitados ordem 1 : ");
	for(i=0; i < TAM; i++)
	{
		printf("%i ", v[i]);
	}
	
	printf("\nValores digitados ordem 2 : ");
	for(i=TAM-1; i >= 0; i--)
	{
		printf("%i ", v[i]);
	}
	
	return 0;
}
