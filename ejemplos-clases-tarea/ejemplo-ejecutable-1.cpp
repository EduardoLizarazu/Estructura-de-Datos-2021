#include "iostream"
#include "TresMejoresNotas.h"
#include <stdlib.h>
using namespace std;

int main() {
	int A[100], n;
	TresMejoresNotas tres_mejores_notas;
	
	cout << "Tamano del vector:"; cin >> n;
	cout << "Datos del vector" << endl;
	tres_mejores_notas.LeerVec(A, n);  
	tres_mejores_notas.BubleSort(A, n);

	
	cout << "VECTOR ORDENADO" << endl;
	tres_mejores_notas.ImprimaVec(A, n);
	system("pause");
	return 0;
}