#include <iostream>
using namespace std;

class Nokta {
private:
    int x;
    int y;
public:
    const int t;
    Nokta();
    Nokta(int, int, int);

    int getX();
    int getY();

    void setX(int);
    void setY(int);
};

Nokta::Nokta() : t(0) {
    x = 0;
    y = 0;
    cout << "parametresiz kurucu " << x << "  " << y << endl;
}
Nokta::Nokta(int x, int y=8, int t=0) : t(t) {
    this->x = x;
    this->y = y;
    // this->t = t;  hatalı kullanım
    cout << "parametreli kurucu " << x << "  " << y << endl;
}

int Nokta::getX() { return x; }
int Nokta::getY() { return y; }

void Nokta::setX(int x) { this->x = x; }
void Nokta::setY(int y) { this->y = y; }

int main()
{
    Nokta n1(1, 10);
    Nokta n2(2, 25, 100);
    cout << n1.t << endl;
    cout << n2.t << endl;

    Nokta n3;
    cout << n3.t << endl;


    cout << endl;
    system("pause");
    return 0;
}