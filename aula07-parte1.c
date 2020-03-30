#include <stdio.h>

int main()
{
	float numero = -5;
		
	if( numero > 10 ) {
		if(numero < 20 ){
			printf("A");
		}
		else{
			printf("B");
		}
	}
	else{
		if(numero > 0){
			printf("C");
		}
		else{
			printf("D");
		}
	}
	
	return 0;	
}
