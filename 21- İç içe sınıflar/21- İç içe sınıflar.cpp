#include <iostream>
using namespace std;
#include "Nokta.h"

class cizgi {
private:
    Nokta baslangic;
    Nokta bitis;
public:
    cizgi(Nokta baslangic, Nokta bitis) : baslangic(baslangic), bitis(bitis)
    {

    }

    double uzunluk()const {
        return baslangic.uzaklikHesapla(bitis);
    }

    void yazdir()const {
        cout << "Baslangıç noktası: ";
        baslangic.ekranaYaz();
        cout << "Bitiş noktası: ";

        bitis.ekranaYaz();
        cout << "Çizginin uzunluğu: " << uzunluk() << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Turkish");

    cizgi c(Nokta(0, 0), Nokta(5, 5));
    c.yazdir();

    cout << endl;
    system("pause");
    return 0;
}