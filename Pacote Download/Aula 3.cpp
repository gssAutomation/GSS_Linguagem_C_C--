#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Função principal do programa
int main(){
	
	// Definindo Variáveis
	int a;
	float b;
	char c;
	bool d;
	
	//Passando Valores
	a = 5;
	b = 2.5;
	c = 'a';
	d = true; // TRUE == 1 && FALSE == 0
	
	//Imprime o valor de a
	printf("\n O valor de a: %d", a);
	printf("\n O valor de b: %.2f", b);
	printf("\n O valor de c: %c", c);
	printf("\n O valor de d: %d", d);
	
	//Lendo e Escrevendo o valor na tela 
	scanf("%d", &a);
	scanf("%f", &b);
	scanf(" %c", &c);  //Para poder ler um char tem que colocar um espaço
	scanf("%d", &d);
	
	//Imprime o valor digitado
	printf("\n O novo valor de a: %d", a);
	printf("\n O novo valor de b: %.2f", b);
	printf("\n O novo valor de c: %c", c);
	printf("\n O novo valor de d: %d", d);
	
	
	//Pausa o sistema
	printf("\n \n");
	system ("\n pause\n");
	return 0;
}
