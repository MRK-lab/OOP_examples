#include <iostream>
using namespace std;
// destructor: sadece 1 tane ve parametresiz şekilde olmalı
// !!!! yıkıcı çalıştı ekran çıktısı alamadım !!!!

class Nokta {
private:
    int x;
    int y;
public:
    int* z;
    Nokta();
    Nokta(int, int);
    ~Nokta();

    int getX();
    int getY();

    void setX(int);
    void setY(int);

    void ekranaYaz();
    bool baslangicMi();
};

Nokta::Nokta()
{
    cout << "Parametresiz kurucu calisti" << endl;
    x = 0;
    y = 0;
    z = new int(5);
}
Nokta::Nokta(int x, int y)
{
    cout << "parametreli kurucu calisti" << endl;
    this->x = x;
    this->y = y;
    z = new int(6);
}
Nokta::~Nokta() {
    cout << "yıkıcı calisti1" << endl;
    delete z;
}

int Nokta::getX() { return x; }
int Nokta::getY() { return y; }

void Nokta::setX(int x) { this->x = x; }
void Nokta::setY(int y) { this->y = y; }

void Nokta::ekranaYaz() { cout << x << "   " << y << endl; }
bool Nokta::baslangicMi() { return x == 0 && y == 0; }

int main()
{
    Nokta n;

    cout << endl;
    system("pause");
    return 0;
}