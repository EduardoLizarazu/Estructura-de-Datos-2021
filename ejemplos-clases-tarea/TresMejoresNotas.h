#pragma once
class TresMejoresNotas
{
private:
	int vector[100];
	int n;
public:
	TresMejoresNotas(void);
	~TresMejoresNotas(void);
	void LeerVec(int V[], int n);
	void ImprimaVec(int V[], int n);
	void BubleSort(int V[], int n);
};

