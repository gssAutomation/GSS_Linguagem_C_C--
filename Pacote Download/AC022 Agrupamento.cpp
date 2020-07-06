#include<iostream>

using namespace std;

struct pessoa{
	int idade;
	
	Pessoa(int idade){
		this->idade = idade;
	}
	
	void setIdade(int idade){
		this->idade = idade;
	}
	int getIdade(){
		return idade;
	}
};

int main(){
	//Definindo variáveis 
	pessoa p;
	
	p.setIdade(20);
	cout << p.getIdade() << endl;
	
	return 0;
}
