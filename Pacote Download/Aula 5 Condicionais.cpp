#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main (){
	int a = 5, opcao = 1;
	float b = 2.5;
	char c = 'x';
	
	//Imprime na tela
	if (a ==5){
		printf("\nA variavel a eh = 5");
	} 
	
	if (b == 2.5){
		printf("\nA variavel b eh = 2.5");
	}
	if (c == 'x'){
		printf("\nO caracter C eh = x");
	}
	
	//Numero par ou impar 
	if (a % 2 == 1){
		printf("\n a variavel a eh impar");
	}else{
		printf("\nA variavel eh par");
	}
	
	//Condicional composta
	if (opcao == 1){
		printf("\n A opcao eh = 1");
	} else if (opcao == 2){
		printf("\n A opcao eh = 2");
	} else {
		printf("\nOpcao INVALIDA");
	}
	
	
	//Pausa o sistema
	printf("\n\n");
	system ("\npause");
	//Retorna o valor 0
	return 0;
}
