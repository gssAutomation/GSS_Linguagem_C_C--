#include <stdio.h>
#include <stdlib.h>

// Fun��o principal do programa
int main(){
	//Imprime na tela
	printf("Hello World\n");
	
	//Definindo uma V�riavel 
	int a = 5, b;
	
	//Imprimindo a variavel A
	printf("%d",a); 
	
	//Concatenando
	printf("\nO valor da variavel: %d", a);
	
	//Mudando o valor da vari�vel
	a = 15;
	
	//Concatenando
	printf("\nO valor da variavel: %d", a );
	
	//Lendo valor
	scanf("%d", &b);
	
	//Concatenando
	printf("\nO valor da variavel b: %d", b);
	
	//Pausa o sistema
	printf("\n\n"); 
	system ("\npause\n");
	return 0;
}
