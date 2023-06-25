#ifndef _KOLON_H_
#define _KOLON_H_
#include <iostream>
using namespace std;

class Kolon {
private:
	int* data;
	int boyut;
	void ara(int); //**
public:
	Kolon(int = 1);
	Kolon(const Kolon&);
	//~Kolon();

	void set(int, int);
	const int* getData()const;
	int getBoyut();
	void setBoyut(int boyut);
	void print()const;

	Kolon topla(const Kolon&)const;
	Kolon carpma(const Kolon&)const;
	double ortHesapla()const;

	Kolon operator+(const Kolon&)const;

	Kolon operator+(const int x)const;

	Kolon& operator=(const Kolon&);

	int& operator[](int indis);

	void operator()(int, int); 
	
	void operator++(int); //** postfix olarak kullanmak için parametre verilir
	void operator++(); //** prefix olarak kullanacaðým anlamaýnda gelir
	void operator--(int); //** postfix olarak kullanmak için parametre verilir
	void operator--(); //** prefix olarak kullanacaðým anlamaýnda gelir
};



#endif // !_KOLON_H_
