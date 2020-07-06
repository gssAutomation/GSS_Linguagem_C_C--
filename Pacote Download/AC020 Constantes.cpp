#include <iostream>

using namespace std;

int main(){
	
	//Pode ser utilizado com ponteiros
	const int vet[] = {1,2,3};
	const int* p1 = &vet[0];  //Arrays de contantes int
	int const* p2 = &vet[1];  //Arrays de contantes int
	//Esse não
	int* const p3 = new int[3]; //Não é possível alterar o ponteiro
	
	cout << "p1 = " << *p1 << endl;
	cout << "p2 = " << *p2 << endl;
	
	*p3 = 1;
	*(p3 + 1) = 2;
	*(p3 + 2) = 3;
	
	cout << "P3"  		 << endl;
	cout << *p3;
	cout << *(p3 + 1)<< endl;
	cout << *(p3 + 2)<< endl;
	
	return 0;
}
