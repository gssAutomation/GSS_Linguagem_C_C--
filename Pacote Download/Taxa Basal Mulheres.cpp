#include <stdio.h>
#include <iostream>


//Mulheres
using namespace std;

int main(){
	
	float altura, peso, resultado,idade;
	
	cout << "Digite seu peso: ";
	cin >> peso;
	cout << "Digite sua altura: ";
	cin >> altura;
	cout << "Digite sua idade: ";
	cin >> idade;
	
	cout << "Resultado da taxa basal: ";
	
	resultado =(655 + (9.6 * peso) + (1.8 * altura ) - (4.7 * idade));
	
	cout << resultado;
	
	return 0;
}
