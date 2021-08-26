#pragma once
class IVA
{
private:
	int iva;
	int precio;
public:
	IVA();
	~IVA(void);
	int calIva(int iva, int price);
};


