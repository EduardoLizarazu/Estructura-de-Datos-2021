#include "iostream"
#include "Vector.h"

using namespace std;

Vector::Vector() {

}
Vector::~Vector() {

}

void Vector::cargarVector(int vec[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Ingrese v["; i; "]= ";
		cin >> vec[i];
	}
}
void Vector::mostrarVector(int vec[], int n) {
	cout << "El resultado es => " << endl;
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ")" << vec[i] << endl;
	}
}
int Vector::sumarVector(int vec[], int n) {
	int res = 0;
	for (int i = 0; i < n; i++) {
		res += vec[i];
	}
	return res;
}
