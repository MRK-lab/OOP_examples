#include "Nokta.h"

Nokta::Nokta(int x,int y) : x(x),y(y){}
int Nokta::getX()const { return x; }
int Nokta::getY()const { return y; }
void Nokta::setX(int x) { this->x = x; }
void Nokta::setY(int y) { this->y = y; }

std::ostream& operator <<(std::ostream& out, Nokta& n) {
	out << n.x << ", " << n.y;
	return out;
}