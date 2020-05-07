#include <stdio.h>
#define TAM 5

int main(){
	int i;
	float media, somatorio, v[TAM];
	
	for(i=0; i < TAM; i++)
	{
		printf("Digite um valor: ");
		scanf("%f", &v[i]);
	}
	
	somatorio = 0;
	for(i=0; i < TAM; i++)
	{
		somatorio += v[i];
	}
	
	media = somatorio / TAM;
	
	printf("\nMedia do vetor: %.2f", media);
	
	return 0;
}
