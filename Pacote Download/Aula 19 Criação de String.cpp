#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main (){
	//vairavel
	char palavra[255];
	
	//Intrução
	printf("Digite uma palavra");
	
	//Buffer
	setbuf(stdin, 0);
	
	//Lê string
	fgets(palavra, 255, stdin);
	
	//Limpa as casas não utilizadas
	palavra[strlen(palavra) - 1] = '\0';
	
	//Imprime na tela
	printf("%s", palavra);
	
	//Pausa o sistema
	printf("\n\n");
	system ("\npause");
	//Retorna o valor 0
	return 0;
}
