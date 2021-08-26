#include "iostream"
#include <stdlib.h>
#include "IVA.h"
using namespace std;

int main() {
	int precio, iva;
	cout << "Ingrese el precio del iva en su pais: ";
	cin >> iva;
	cout << "Ingrse el precio del producto: ";
	cin >> precio;
	IVA bolivia;

	cout << "El precio del producto con iva es: " << bolivia.calIva(iva, precio) << endl;
	
	system("pause");
	return 0;
}