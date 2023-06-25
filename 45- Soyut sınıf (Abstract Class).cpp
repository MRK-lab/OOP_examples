#include <iostream>
using namespace std;

class sekil {
protected:
    double alan,cevre;

public:
    virtual void senNesin() = 0;  //{cout << "Ben şekilim" << endl;} türemiş sınıflar bu metodun gövdesini bulundurmak zorunda
    virtual void alanHesapla() = 0;
    virtual void cevreHesapla() = 0; // pure method

    double getAlan()const { return alan; }
    double getCevre()const { return cevre; }
};

class dikdortgen:public sekil {
    double yukseklik, genislik;
public:
    dikdortgen(double yukseklik,double genislik):yukseklik(yukseklik),genislik(genislik){}
    void senNesin() { cout << "Ben dikdörtgenim" << endl; }
    void alanHesapla() {
         alan = yukseklik * genislik;
    }
    void cevreHesapla() { cevre = 2 * (yukseklik + genislik); }
};

class daire :public sekil {
    double r;
public:
    daire(double r):r(r){}
    void senNesin() { cout << "Ben daireyim" << endl; }
    void alanHesapla() {
        alan = r * r * 3.14;
    }
    void cevreHesapla() { cevre = 2 * r * 3.14; }
};

class kare :public dikdortgen {
public:
    kare(double x):dikdortgen(x,x){}
    void senNesin() { cout << "Ben kareyim" << endl; }
};

int main()
{
    setlocale(LC_ALL, "Turkish");

    sekil* dizi[3];
    //dizi[0] = new sekil();
    dizi[0] = new dikdortgen(10,2);
    dizi[1] = new daire(10);
    dizi[2] = new kare(5);

    for (int i = 0; i < 3; i++)
    {
        //dizi[i]->senNesin();
        dizi[i]->alanHesapla();
        dizi[i]->cevreHesapla();
        dizi[i]->senNesin();
        cout << dizi[i]->getAlan()<<" "<<dizi[i]->getCevre() << endl;

    }




    cout << endl << endl;
    system("pause");
    return 0;
}