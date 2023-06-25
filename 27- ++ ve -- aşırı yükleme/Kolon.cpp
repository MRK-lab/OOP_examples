#ifndef _KOLON_
#define _KOLON_
#include "Kolon.h"

Kolon::Kolon(int boyut) : boyut(boyut) {
	data = new int[boyut];
}

Kolon::Kolon(const Kolon& k) {
	*this = k;
	/*
	this->boyut = k.boyut;
	data = new int[boyut];
	for (int i = 0; i < boyut; i++)
		data[i] = k.data[i];
	*/
}

//Kolon::~Kolon() { delete data; }

void Kolon::set(int indis, int value) {
	if (indis < boyut)
		data[indis] = value;
}

const int* Kolon::getData()const { return data; }

int Kolon::getBoyut() { return boyut; }
void Kolon::setBoyut(int boyut) { this->boyut = boyut; }
void Kolon::print()const {
	for (int i = 0; i < boyut; i++)
		cout << data[i] << " ";
	cout << endl;
}

Kolon Kolon::topla(const Kolon& k)const {
	if (boyut == k.boyut) {
		Kolon temp(boyut);
		for (int i = 0; i < boyut; i++)
			temp.data[i] = data[i] + k.data[i];
		return temp;
	}
}

Kolon Kolon::carpma(const Kolon& k)const {
	if (boyut == k.boyut) {
		Kolon temp(boyut);
		for (int i = 0; i < boyut; i++)
			temp.data[i] = data[i] * k.data[i];
		return temp;
	}
}

double Kolon::ortHesapla()const {
	int ara = 0;
	for (int i = 0; i < boyut; i++)
		ara += data[i];
	return (double)ara / boyut;
}

Kolon Kolon::operator+(const Kolon& k)const {
	if (boyut == k.boyut)
	{
		Kolon temp(boyut);
		for (int i = 0; i < boyut; i++)
			temp.data[i] = data[i] + k.data[i];
		return temp;
	}
}

Kolon Kolon::operator+(const int x)const {
	Kolon temp(boyut);
	for (int i = 0; i < boyut; i++)
		temp.data[i] = data[i] + x;
	return temp;
}

Kolon& Kolon::operator=(const Kolon& k) {
	delete[] data;
	boyut = k.boyut;
	data = new int[boyut];
	for (int i = 0; i < boyut; i++)
		data[i] = k.data[i];
	return *this;
}

int& Kolon::operator[](int indis) {
	if (indis >= 0 && indis < boyut) {
		return data[indis];
	}
}

void Kolon::operator()(int i, int j) {
	int temp = data[i];
	data[i] = data[j];
	data[j] = temp;
}

void Kolon::ara(int value){ //** value kadar tüm deðerleri arttýr
	for (int i = 0; i < boyut; i++)
		data[i] += value;
}

void Kolon::operator++(int) { //** parametre vermeyiz sadece postfx olduðunu anlatmak için
	ara(1);
}
void Kolon::operator++() { //**
	ara(2);
}
void Kolon::operator--(int) { //** parametre vermeyiz sadece postfx olduðunu anlatmak için
	ara(-1);
}
void Kolon::operator--() { //**
	ara(-2);
}

#endif // !_KOLON_
