#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main (){
	//Denifindo variaveis
	int opcao;
	
	//Confere e valida as opções
	while (opcao < 1 || opcao > 3){
		
		//Menu de opções		
		printf("\n Escolha uma opcao: ");
		printf("\n 1 - Opcao 1");
		printf("\n 2 - Opcao 2");
		printf("\n 3 - Opcao 3\n\n");
		
		//Lendo as opções
		scanf("\n%d", &opcao);
		
		//opções
		switch(opcao){
			case 1:
				printf("\nOpcao 1 foi escolhido");
				break;
			case 2:
				printf("\nOpcao 2 foi escolhido");
				break;
			case 3:
				printf("\nOpcao 3 foi escolhido");
				break;
			default:
				printf("\nOpcao INVALIDA\n\n");
				break;
		}
	}
	
	
	//Pausa o sistema
	printf("\n\n");
	system ("\npause");
	//Retorna o valor 0
	return 0;
}
