#include "Factorial.h"
#include "iostream"
using namespace std;
Factorial::Factorial(){}
Factorial::~Factorial(){}

int Factorial::calcFac(int n) {
	int fac = 1;
	for (int i = 0; i < n; i++)
	{
		fac *= i + 1;
	}
	return fac;
}
