#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main (){
	//Definindo Variaveis 
	int cont;
	
	//Tabuada do 5
	for(cont = 1; cont <= 10; cont++){
		printf("\n5 x %d = %d", 5 * cont);
	}
	
	for(cont = 1; cont <= 10; cont = cont +2){
		printf("\n%d",cont);
	}
	
	//Pausa o sistema
	printf("\n\n");
	system ("\npause");
	//Retorna o valor 0
	return 0;
}
