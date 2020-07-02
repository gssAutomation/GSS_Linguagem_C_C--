#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main (){
	//Definindo Variaveis
	char letra = 'x';
	
	//Condicional simples
	if (letra == 'x'){
		printf("\na letra eh x");
	}
	//Imprimindo o valor da letra 
	printf("\no valor da letra x eh = %d", letra);
	
	if (120 == 'x'){
		printf("\n True");
	}
	
	
	//Pausa o sistema
	printf("\n\n");
	system ("\npause");
	//Retorna o valor 0
	return 0;
}
