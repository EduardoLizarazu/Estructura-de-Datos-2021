#include "iostream"
#include "TresMejoresNotas.h"
using namespace std;

TresMejoresNotas::TresMejoresNotas(void){}
TresMejoresNotas::~TresMejoresNotas(void){}

void TresMejoresNotas::LeerVec(int V[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		cout << i + 1 << ") ";
		cin >> V[i];
	}
}
void TresMejoresNotas::ImprimaVec(int V[], int n) {
	int i;
	for (i = 0; i < 3; i++) {
		cout << V[i] << "  ";
	}
	cout << endl;
}
void TresMejoresNotas::BubleSort(int V[], int n) {
	int i, j, aux;
	for (j = 0; j < n - 1; j++) {
		for (i = 0; i < n - 1 - j; i++) {
			if (V[i] < V[i + 1]) {
				aux = V[i];
				V[i] = V[i + 1];
				V[i + 1] = aux;
				ImprimaVec(V, n);
			}
		}
	}
}