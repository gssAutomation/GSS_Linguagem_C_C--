#include <stdio.h>
#include <stdlib.h>
#define TAM 3

// Função principal do programa
int main (){
	//Imprime na tela
	int vetor[3], cont;
	
	//Passando valores para o vetor 
	vetor[0] = 5;
	vetor[1] = 10;
	vetor[2] = 15;
	
	//Adcionando 1 para cada vetor
	for(cont = 0; cont < TAM; cont++){
		vetor[cont] = vetor[cont] + 1;
	}
	
	//Exibindo valores
	printf("\nPosicao 0: %d", vetor[0]);
	printf("\nPosicao 1: %d", vetor[1]);
	printf("\nPosicao 2: %d\n", vetor[2]);
	
	//Imprimindo o vetor em um laço de repetição
	for(cont = 0; cont < TAM; cont++){
		printf("\nPosicao %d : %d", cont, vetor[cont]);
	}
	
	//Lendo 3 valores para o meu Vetor
	for(cont = 0; cont < TAM; cont++){
		scanf("%d", &vetor[cont]);
	}
	
	//Imprimindo o vetor em um laço de repetição
	for(cont = 0; cont < TAM; cont++){
		printf("\nPosicao %d : %d", cont, vetor[cont]);
	}
	
	//Pausa o sistema
	printf("\n\n");
	system ("\npause");
	//Retorna o valor 0
	return 0;
}
