#include <iostream>
using namespace std;

int num_global = 12;

void foo(){
	int num = 10;
	static int num_static = 1;
	cout << "Variavel global:  "  << num_global << endl;
	cout << "Variavel Local: "    << num        << endl;
	num_static++;
	cout << "Variavel static: "   << num_static << endl;
}

int main(){
	//Chama a variável
	foo();
	foo();
	foo();
	return 0;
}
