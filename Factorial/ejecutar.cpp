#include "iostream"
#include <stdlib.h>
#include "Factorial.h"
using namespace std;
int main() {
	int n;
	cout << "Ingrese un numero: ";
	cin >> n;
	Factorial minifactorial;
	cout << "El factorial es: "<< minifactorial.calcFac(n)<<endl;
	

	system("pause");
	return 0;
}