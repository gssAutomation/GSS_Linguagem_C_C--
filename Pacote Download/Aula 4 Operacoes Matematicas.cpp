#include <stdio.h>
#include <stdlib.h>

// Fun��o principal do programa
int main (){
	//Definindo vari�veis 
	int a = 6, b =3;
	
	//soma
	printf("A soma de %d + %d = %d", a,b,  a+b);
	//subtra��o
	printf("\nA subtracao de %d - %d = %d", a,b, a-b);
	//Divis�o
	printf("\nA divisao de %d / %d = %d", a,b, a/b);
	//Multiplica��o
	printf("\nA multiplicacao de %d * %d = %d", a,b, a*b);
	//Resto da divis�o
	printf("\nA O resto da divisao de %d e %d = %d", a,b, a % b);
	//Valor absoluto
	printf("\nO valor absoluto de -3 = %d", abs(-3));
	
	
	
	//Pausa o sistema
	printf("\n\n");
	system ("\npause");
	//Retorna o valor 0
	return 0;
	
}
