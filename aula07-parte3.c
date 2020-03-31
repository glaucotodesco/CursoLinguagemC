/*
   Calcular o IMC (Índice de Massa Corporal) de uma pessoa
   A fórmula do IMC é: Peso (kg) / (Altura * Altura) (m).
   Informe a classificação do IMC na tela de acordo com as regras abaixo:
   
   IMC < 18,5 Abaixo do peso 
   De 18,5 a menor que 25,0 Saudável 
   De 25,0 a menor que 30,0 Sobrepeso 
   De 30,0 a menor que 35,0 Obesidade Grau I 
   De 35,0 a menor que 40,0 Obesidade Grau II (severa) 
   De 40,0 em diante Obesidade Grau III (mórbida) 
   
*/

#include <stdio.h>

int main()
{
	float peso, altura, imc;
	
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	if(peso > 0)
	{
		if(peso < 18.5){
			printf("Abaixo do peso");
		}
		else{
			if(peso < 25){
				printf("Saudavel");
			}
			else{
				if(peso < 30){
					printf("Sobrepeso");
				}
				else{
					if(peso < 35){
						printf("Obsidade Grau I");
					}
					else{
						if(peso < 40){
							printf("Obsidade Grau II");
						}
						else
						{
							printf("Obesidade Grau III");
						}
					}
				}
			}
		}
	}
	else{
		printf("Peso deve ser positivo!");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
