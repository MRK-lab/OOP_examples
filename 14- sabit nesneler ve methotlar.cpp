#include <iostream>
using namespace std;

// sabit nesnelerin hiç bir methodu sınıf dışından çağrılamaz

class Nokta {
private:
    int x;
    int y;
public:
    const int t;
    Nokta();
    Nokta(int, int, int);

    int getX()const; //**
    int getY()const; //**

    void setX(int);
    void setY(int);
};

Nokta::Nokta() : t(0) {
    x = 0;
    y = 0;
    cout << "parametresiz kurucu " << x << "  " << y << endl;
}
Nokta::Nokta(int x, int y = 8, int t = 0) : t(t) {
    this->x = x;
    this->y = y;
    // this->t = t;  hatalı kullanım
    cout << "parametreli kurucu " << x << "  " << y << endl;
}

int Nokta::getX() const{ return x; } //**
int Nokta::getY() const{ return y; } //**

void Nokta::setX(int x) { this->x = x; }
void Nokta::setY(int y) { this->y = y; }

int main()
{
    Nokta n1(1, 10, 100);
    const Nokta n2(2, 20, 200);

    cout << n1.getX() << "  " << n1.getY() << endl;
    n1.setX(11);
    cout << n1.getX() << "  " << n1.getY() << endl;

    //cout << n2.getX() << "  " << n2.getY() << endl; //n2 değiştirilemez
    //n2.setX(22); // n2 değiştirilemez

    cout << endl;
    system("pause");
    return 0;
}