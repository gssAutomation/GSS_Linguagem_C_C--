#include<iostream>
#include<string.h>

using namespace std;

class Pessoa {
public:
	char nome[100];
	char cpf[20];
	int idade;
};
int getIdade(Pessoa pessoas[], const char nome[]){
	int tam = sizeof(pessoas);
	
	for(int i=0; i < tam; i++){
		if( strcmp ( nome, pessoas[i] .nome ) == 0){
			return pessoas[i].idade;
		}
	}
	return -1;
}

int main(){
	Pessoa p1; //Instancia de pessoa significa um objeto
	
	/*strcpy(p1.nome, "João");
	strcpy(p1.cpf, "44499944422");/*/
	
	Pessoa pessoas[3] = 
	{
		{ "Joao","44444444444", 30 },
		{ "Birubiru","44444444444", 30 },
		{ "pedro","44444444444", 30 },
	};
	cout << "Nome:" << pessoas[0].nome << endl;
	cout << "Nome:" << pessoas[1].nome << endl;
	cout << "Nome:" << pessoas[2].nome << endl;
	
	int idade = getIdade(pessoas, "pedro");
	
	if(idade != -1){
		cout << "Idade do Pedro: " << idade << endl;
	} else {
		cout << "Pessoa nao encontrada." << endl;
	}
	
	return 0;
}








