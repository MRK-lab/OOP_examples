#include <iostream>
using namespace std;

class Nokta {
public:
    int x, y;

    void degerAta(int _x, int _y)
    {
        x = _x;
        y = _y;
    }

    void ekranaYaz()
    {
        cout << x << " , " << y << endl;
    }

    bool baslangictaMi()
    {
        if (x == 0 && y == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    setlocale(LC_ALL, "Turkish");

    Nokta n;
    n.degerAta(2, 7);
    n.ekranaYaz();

    Nokta n2;
    n2.degerAta(0, 0);
    n2.ekranaYaz();

    if (n.baslangictaMi())
        cout << "n başlangıç noktasında." << endl;

    if (n2.baslangictaMi())
        cout << "n2 başlangıç noktasında." << endl;

    cout << endl;
    system("pause");
    return 0;
}