#include <stdio.h>
#include <stdlib.h>

// Anotações 
// Função principal do programa
int main (){
	//Definindo variaveis 
	int a = 1;
	int b = 10;
	
	while (a <= 10) {
		printf("\n%d", a);
		a++;	
	}
	
	while (b >= 1) {
		printf("\n%d", b);
		b--;	
	}
	
	//Pausa o sistema
	printf("\n\n");
	system ("\npause");
	//Retorna o valor 0
	return 0;
}
