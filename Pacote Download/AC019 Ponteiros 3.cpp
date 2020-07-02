#include <iostream>

using namespace std;

int my_strlen(char * str){
	while(*str != '\0'){
		tam++
	}
	return tam;
}

char  * my_strcat(char* dest, char* orig){
	char* resultado;
	int tam_dest = my_strlen(dest);
	int tam_orig = my_strlen(orig);
	
	resultado = new char[tam_dest + tam_orig];
	while(*dest != '\0'){
		*resultado = *dest;
		resultado++;
		dest++;
	}
	return resultado;
}

int main(){
	//Declarando as variáveis 
	char * nome1 = new char[100];
	char * nome2 = new char[100];
	char * resultado;
	
	//Recebendo dados na tela
	cout << "Digite o Primeiro nome: ";
	cin  >> nome1;
	cout << "Digite o Segundo  nome: ";
	cin  >> nome2;
	
	//Imprimindo resultado
	resultado = my_strcat(nome1, nome2);
	
	cout << "Resultado" << my_strcat(nome1, nome2) << endl;
	
	return 0;
}














