#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main (){
	//Definindo variaveis 
	int a = 1;
	int b = 10;
	
	while (a <= 10) {
		printf("\n%d", a);
		a++;	
	}
	
	a = 1;
	
	do  {
		printf("\n%d", b);
		b--;	
	} while (b >= 1); 
	
	//Pausa o sistema
	printf("\n\n");
	system ("\npause");
	//Retorna o valor 0
	return 0;
}
