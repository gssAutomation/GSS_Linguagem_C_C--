#include<iostream>
#include<string.h>

using namespace std;

typedef struct pessoa{
	char nome[100];
	int idade;
}t_pessoa;

int main(){
	//Definindo vari�veis 
	t_pessoa pessoa;
	t_pessoa* ppessoa;
	
	ppessoa = &pessoa;
	ppessoa->idade = 26;
	
	cout << ppessoa->idade << endl; 
	
	
	return 0;
}
