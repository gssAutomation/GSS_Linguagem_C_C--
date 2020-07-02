#include <iostream>

using namespace std;

int main(){
	//Definindo variável 
	int array[] = {1,2,3,4,5}; //Vetores
	int* parray = &array[0]; //Ponteiro
	int** pparray = &parray; //Ponteiro do ponteiro
	int i = 0;
	
	while (i < 5){
		cout << *parray << endl; //Imprime resultado
		parray = parray + 1;
		i++;
	}
	
	cout << **pparray << endl;
	
	//Utilizando ponteiros com caracteres 
	char nome[100];
	int tam = strlen(nome);
	char* p = &nome[tam];
	char* 
	
	cout << "Digite um nome: ";
	cin  >> nome;
	
	while(p != &nome[0]){
		cout << *p;
		p--;
	}
	
	cout << endl;
	
	return 0;
}













