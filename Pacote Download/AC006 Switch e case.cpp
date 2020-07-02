#include <iostream>
using namespace std;


//Calculadora
int main(){
	
	int num1, num2, resultado;
	float div;
	char op;
	
	cout << "Digite o Primeiro Numero: ";
	cin  >> num1;
	cout << "Digite o Segundo  Numero: ";
	cin  >> num2;
	cout << "Digite a operacao: ";
	cin  >> op;
	
	switch (op){
		case '+':
			resultado = num1 + num2;
			cout << "Soma: " << resultado << endl;
			break;
		case '-':
			resultado = num1 - num2;
			cout << "Subtracao: " <<  resultado ;
			break;
		case '*':
			resultado = num1 * num2;
			cout << "Multiplicacao: " << resultado ;
			break;
		case '/':
			div = num1 * num2;
			cout << "Divisao: " << div ;
			break;
		default:
			break;
	}
	
	
	return 0;
}
