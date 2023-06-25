#ifndef _NOKTA_H_
#define _NOKTA_H_
#include <math.h>
#include <iostream>
using namespace std;

class Nokta {
private:
	int x;
	int y;
public:
	Nokta();
	Nokta(int, int);
	Nokta(const Nokta&);
	~Nokta();

	int getX()const;
	int getY()const;

	void setX(int);
	void setY(int);

	Nokta topla(const Nokta&)const; //**

	double uzaklikHesapla(const Nokta&)const;
	void ekranaYaz()const;
	bool baslangicMi();
};
#endif