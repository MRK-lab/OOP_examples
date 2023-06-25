#include <iostream>
using namespace std;
// kurucu fonksiyonların geri dönüş değeri olmaz ve sınıfla aynı isimde olmalı
// public kısımda bulunmalı

class Nokta {
private:
    int x, y;
public:
    Nokta(); // constructer
    Nokta(int, int);

    int getX();
    int getY();
    void setX(int);
    void setY(int);

};

int Nokta::getX() {
    return x;
}
int Nokta::getY() {
    return y;
}
void Nokta::setX(int x) {
    this->x = x;
}
void Nokta::setY(int y) {
    this->y = y;
}

Nokta::Nokta() {
    x = 2;
    y = 5;
}

Nokta::Nokta(int x, int y=8) {
    this->x = x;
    this->y = y;
}

int main()
{
    Nokta n;
    cout << n.getX() << "  " << n.getY() << endl;

    //Nokta n2(5, 10);
    Nokta n2(5); // varsayılan değer y için 8
    cout << n2.getX() << "  " << n2.getY() << endl;

    cout << endl;
    system("pause");
    return 0;
}