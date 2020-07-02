#include <stdio.h>
#include <stdlib.h>

#define TAM 10

// Função principal do programa
int main (){

	// Imprime na tela  
	printf("%d", TAM);
	
	int i;
	
	for(i = 1; i <= TAM; i++){
		printf("\n%d", i);
	}
	
	//Pausa o sistema
	printf("\n\n");
	system ("\npause");
	//Retorna o valor 0
	return 0;
}
