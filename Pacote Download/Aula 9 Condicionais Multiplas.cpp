#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main (){
	//Definindo Variaveis
	int a = 10;
	
	//Conectivo lógico (AND), se uma comparação for falsa, não entra no bloco
	if( a > 5 && a < 15){
		printf("\n A variavel 'a' esta entre 5 e 15");
	}
	//Conectivo lógico (OR), se uma comparação for verdadeira, já entra no bloco
	if( a > 5 || a < 15){
		printf("\n A variavel 'a' eh maior que 5 ou 15");
	}
	//Misturando conectivos 
	if(( a > 5 && a < 15) || a == 20){
		printf("\n A variavel 'a' esta entre 5 e 15 ou ela vale 20 ");
	}
	
	
	
	
	//Pausa o sistema
	printf("\n\n");
	system ("\npause");
	//Retorna o valor 0
	return 0;
}
