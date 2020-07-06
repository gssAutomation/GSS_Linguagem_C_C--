#include<iostream>
#include<string.h>
#define MAX 10

using namespace std;

class Carro{
public:
	char nome[100];
	char cor[20];
	char placa[20];
	double preco;
};

//Ordenação com bubble sort
void ordena(Carro carros[], int tam){
	int i, j;
	Carro aux;
	
	for(int i = tam; i >= 0; i--)
	{
		for(int j = 1; j <= i; j++)
		{
			if(strcmp(carros[j-1].nome, carros[j].nome) == 1)
			{
				aux = carros[j - 1];
				carros[j - 1] = carros[j];
				carros[j] = aux;
			}
		}
	}
}

int main(){
	
	Carro carros[MAX];
	int i = 0;
	
	while(true){
		char resp;
		cout << "Digite o nome do carro: ";
		cin  >> carros[i].nome;
		cout << "Digite o preco do carro: ";
		cin  >> carros[i].preco;
		cout << "Digite a cor do carro: ";
		cin  >> carros[i].cor;
		//Comando para continuar o Loop de perguntas sobre o carro
		cout << "Voce deseja continuar <S>SIM ou <N>NAO ?";
		cin  >> resp;
		if (resp != 'S')
			break;
		cout << endl;
		i++;
	}	
	
	cout << endl;
	cout << " | Exibindo detalhes dos carros |" << endl;
	cout << endl;
	for(int j = 0; j <= i; j++){
		cout << " | Nome do carro: " << carros[j].nome << endl;
		cout << " | Preco: R$ " 	 << carros[j].preco << endl;
		cout << " | Cor: " 			 << carros[j].cor << endl;
		cout << endl;
	}
	
	ordena(carros, i);
	
	cout << "Exibindo os carros ordenados pelo nome...\n\n";
	
	for(int j = 0; j <= i; j++){
		cout << " | Nome do carro: " << carros[j].nome << endl;
		cout << " | Preco: R$ " 	 << carros[j].preco << endl;
		cout << " | Cor: " 			 << carros[j].cor << endl;
		cout << endl;
	}
	
	return 0;
}








