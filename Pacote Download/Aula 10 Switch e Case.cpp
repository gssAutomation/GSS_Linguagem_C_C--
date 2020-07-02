#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main (){
	//Definindo Variaveis 
	int a = 1;
	char b = 'x';
	
	//Código exemplo usando IF
	if (a == 1){
		printf("Opcao selecionada 1");
	}else if(a == 2){
		printf("Opcao selecionada 2");
	}else if(a == 3){
		printf("Opcao selecionada 3");
	}else{
		printf("OPCAO INVALIDA");
	}
	
	//Código de cima ADAPTADO
	switch (a){
		case 1:
			printf("\nOpcao selecionada 1");
			break;
		case 2:
			printf("\nOpcao selecionada 2");
			break;
		case 3:
			printf("\nOpcao selecionada 3");
			break;
		default
			printf("\nOPCAO INVALIDA");
			break;
	}	
	
	switch (b){
		case 'x':
			printf("\nA letra eh x")
			break;
	}
	
	
	
	
	//Pausa o sistema
	printf("\n\n");
	system ("\npause");
	//Retorna o valor 0
	return 0;
}
