#include <iostream>

using namespace std;

void foo(int* n){
	*n = 20;
}

int main(){
	//Definindo Vari�veis
	int var = 10;
	//Definindo um ponteiro
	int* pvar;
	//Endere�o da variavel VAR
	pvar = &var;
	*pvar = 20;
	cout << *pvar << endl;
	cout << var   << endl;
	
	foo(&var);
	cout << var << endl;
	
	
	int* vet = new int[10];
	
	*(vet + 0) = 15;
	*(vet + 1) = 25;
	*(vet + 2) = 25;
	cout << *(vet + 0) << endl;
	cout << *(vet + 1) << endl;
	cout << *(vet + 2) << endl;
	
	//Mais op��o de ponteiro
	int aux[5];
	
	aux[0]= 1;
	aux[1]= 2;
	aux[2]= 3;
	aux[3]= 4;
	
	/*Esse comando faz com que n�o seja necess�rio
	altera��o do valor final e nem o incial
	da vari�vel (Usando ponteiros e aloca��o de mem�ria)*/
	for (int i = 0; i < sizeof(aux)/sizeof(int);i++){
		cout << aux[i] << endl;
	}
	
	//Outher exemplo
	int* auxS = new int[10];
	cout << "Digite um numero: ";
	cin  >> *(auxS);
	
	cout << "Voce digitou: " << *(auxS) << endl;
	
	//Apaga e limpa o endere�o de mem�ria da vari�vel
	delete[] auxS;
	return 0; 
}












