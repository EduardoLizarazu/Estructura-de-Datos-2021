// Vector-1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
	int A[100], n;
	cout << "Cuantos elementos quiere: "; cin >> n;
	Vector Primera_ins;
	Primera_ins.cargarVector(A, n);
	Primera_ins.mostrarVector(A, n);
	cout << "La respuesta es: " << Primera_ins.sumarVector(A, n);

	return 0;
}