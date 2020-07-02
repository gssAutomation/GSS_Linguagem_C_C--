#include <iostream>
#include <string.h>

using namespace std;

int main(){
	//Variavel pra adcionar um nome 
	char nome[] = "Guilherme"; //Aspas duplas para nomes grandes e aspas simples para letras
	char nome2[] = "Souza";
	int i = 0; //Variavel para o comando While
	//Acrescenta um em um de cada letra 
	while (nome[i] != '\0'){
		cout << nome[i++]; //Incremente de ++ para o nome
	}
	
	// Verifica se o Char é numérico ou alfabético
	if(isalpha(nome[0])){
		cout << "Caractere alfabetico" << endl;
	} else {
		cout << "Caractere numerico" << endl;
	}
	
	//Retorna se é true 
	if(isdigit(nome[0])){
		cout << "Numero" << endl;
	} else {
		cout << "Letra" << endl;
	}
	
	//Verifica se a variavel é Maiuscula ou Minuscula
	if(isupper(nome[0])){
		cout << "Maiuscula" << endl;
	} else {
		cout << "Minuscula" << endl;
	}
	
	if(islower(nome[0])){
		cout << "Minuscula" << endl;
	} else {
		cout << "Maiuscula" << endl;
	}
	
	//Verifica espaço
	if(isspace(nome[0])){
		cout << "Espaço em branco" << endl;
	} else {
		cout << "Nao eh espaco em branco" << endl;
	}
	
	//Compara duas strings 
	if(strcmp (nome, nome2) == 0){
		cout << "Strings iguais" << endl;
	} else {
		cout << "Strings Diferentes" << endl;
	}
	
	//Retorna o char em minusculo
	char c = 'M';
	c = tolower(c); // Char minusculo
	cout << c << endl;
	c = toupper(c); // Char maiusculo
	cout << c << endl;
	
	//Imprime nome na tela
	cout << nome << endl;
	
	//Concatenando duas strings
	char name[100], nickname[100];
	
	cout << "what's your name? ";
	cin  >> name;
	cout << "What's your nickname?'";
	cin  >> nickname;
	
	strcat(name, nickname);
	cout << "Your name: " << name;
	
	return 0;
}
