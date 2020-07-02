#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Anotações 
// Função principal do programa
int main (){
	//Definindo Variaveis
	bool a = true, b = false;
	
	//Condicional se a for verdadeiro
	if (a){
		printf("\nA eh verdadeiro");
	}
	//Condicional se b for verdadeiro 
	if (b){
		printf("\nB eh verdadeiro");
	}else{ //Se b for falso
		printf("\nB eh Falso");
	}
	
	//Comparando uma falsidade
	if(!b){
		printf("\nB eh falso");
	}
	
	//Pausa o sistema
	printf("\n\n");
	system ("\npause");
	//Retorna o valor 0
	return 0;	
}
