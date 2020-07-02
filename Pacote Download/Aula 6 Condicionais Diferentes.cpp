#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main (){
	//Definindo variáveis
	int a = 5, b = 10, c = 15;
	char d = 'a';
	
	//Maior
	if (a > 2){
		printf("\n %d eh maior que 2 ", a);
	}
	//Maior ou igual
	if (c >= b){
		printf("\n %d eh maior ou igual que %d",c,b);
	}
	//Menor
	if (a < 10){
		printf("\n %d eh menor que 10",a);
	}
	//Menor ou Igual
	if (a <= 10){
		printf("\n %d eh menor ou igual a 10",a);
	}
	//Diferente
	if (c != 10){
		printf("\n %d eh diferente que 10",c);
	}
	//Diferente Char
	if (d != 'x'){
		printf("\n %d nao eh a 10",d);
	}
	
	
	//Pausa o sistema
	printf("\n\n");
	system ("\npause");
	//Retorna o valor 0
	return 0;
}
