#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fun��o principal do programa
int main (){
	//Respons�vel pelo rand de forma diferente 
	srand((unsigned)time(NULL));
	
	//Variavel que recebe o resto da divis�o do n�mero 3
	int aleatorio = rand() % 3;
	
	//Variavel que recebe o resto da divis�o do n�mero 5
	int aleatorioSegundo = (rand() % 5) + 1;
	
	//Imprime o valor
	printf("%d", aleatorio);
	
	//Imprime o valor
	printf("%d", aleatorioSegundo);
	
	//Pausa o sistema
	printf("\n\n");
	system ("\npause");
	//Retorna o valor 0
	return 0;
}
