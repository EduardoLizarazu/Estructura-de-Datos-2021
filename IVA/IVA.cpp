#include "IVA.h"
#include "iostream"
using namespace std;

IVA::IVA(void){

}
IVA::~IVA(void){}

int IVA::calIva(int iva, int price) {
	float res;
	res = price / iva;
	return res;
}
