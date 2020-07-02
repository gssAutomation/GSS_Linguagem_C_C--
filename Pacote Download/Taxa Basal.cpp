#include <stdio.h>
#include <iostream>

using namespace std;

//Homens
int main(){
	
	float altura, peso,idade, resultado;
	
	cout << "---------------------------------------------" << endl;
	cout << "------------Calculo de taxa Basal------------" << endl;
	cout << "\nDigite seu peso: "; 
	cin  >> peso;
	cout << "Digite sua altura: ";
	cin  >> altura;
	cout << "Digite sua idade: ";
	cin  >> idade;
	cout << "\n---------------------------------------------";
	cout << "\nResultado da taxa basal: ";
	
	resultado =(66 + (13.8 * peso) + ( 5 * altura ) - (6.8 * idade));
	
	cout << resultado;
	cout << "\n---------------------------------------------\n";
	
	return 0;
}
