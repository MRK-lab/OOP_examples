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

    Nokta* n3;
    n3 = &n2;

    
    if (n.baslangictaMi())
        cout << "n başlangıç noktasında." << endl;

    if (n2.baslangictaMi())
        cout << "n2 başlangıç noktasında." << endl;

    cout << "\nn3 pointerla yazılan değerler: ";
    n3->ekranaYaz();

    Nokta* n4;
    n4 = new Nokta();
    n4->degerAta(100, 200);
    n4->ekranaYaz();

    Nokta array[10]; // normal dizi oluşturma
    Nokta* pArray; // pointerlele dizi oluşturma
    pArray = new Nokta[10];

    for (int i = 0; i < 10; i++)
    {
        array[i].degerAta(i, i + 2);
        (pArray + sizeof(Nokta) * i)->degerAta(i + 5, i + 10);
    }

    for (int i = 0; i < 10; i++)
    {
        array[i].ekranaYaz();
        (pArray + sizeof(Nokta) * i)->ekranaYaz();
        cout << endl;
    }

    cout << endl;
    system("pause");
    return 0;
}