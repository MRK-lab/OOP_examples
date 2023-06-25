#include <iostream>
using namespace std;

class Nokta {
private:
    int x, y;
public:
    
    Nokta();
    Nokta(int, int);
    int getX();
    int getY();

    void setX(int);
    void setY(int);
};

Nokta::Nokta() {
    cout << "parametresiz kurucu"<<endl;
    x = 0;
    y = 0;
}
Nokta::Nokta(int x, int y = 8)
{
    cout << "parametreli kurucu" << endl;
    this->x = x;
    this->y = y;
}

int Nokta::getX() { return x; }
int Nokta::getY() { return y; }

void Nokta::setX(int x) { this->x = x; }
void Nokta::setY(int y) { this->y = y; }

int main()
{
    
    Nokta dizi[5] = { {1,2},{1},{2,3} }; // sadece ilk 3 dizi değeri verildi
    for (int i = 0; i < 5; i++)
        cout << dizi[i].getX() << "  " << dizi[i].getY() << endl;

    Nokta* ptr = new Nokta(2,7);
    cout << ptr->getX() << " " << ptr->getY() << endl;

    cout << endl;
    system("pause");
    return 0;
}