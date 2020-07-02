#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main (){
	//Definindo variáveis 
	int a = 6, b =3;
	
	//soma
	printf("A soma de %d + %d = %d", a,b,  a+b);
	//subtração
	printf("\nA subtracao de %d - %d = %d", a,b, a-b);
	//Divisão
	printf("\nA divisao de %d / %d = %d", a,b, a/b);
	//Multiplicação
	printf("\nA multiplicacao de %d * %d = %d", a,b, a*b);
	//Resto da divisão
	printf("\nA O resto da divisao de %d e %d = %d", a,b, a % b);
	//Valor absoluto
	printf("\nO valor absoluto de -3 = %d", abs(-3));
	
	
	
	//Pausa o sistema
	printf("\n\n");
	system ("\npause");
	//Retorna o valor 0
	return 0;
	
}
