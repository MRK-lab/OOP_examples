#ifndef NOKTA_H
#define NOKTA_H
#include <iostream>
//using namespace std;

class Nokta {
private:
	int x, y;
public:
	Nokta(int x, int y);
	int getX()const;
	int getY()const;
	void setX(int x);
	void setY(int y);
	friend std::ostream& operator << (std::ostream& out, Nokta& n);
};
//#include "Kaynak.cpp"
#endif