#include <iostream>
using namespace std;

class Oyuncu {
public:
    string isim;
    int level;
    Oyuncu(string isim): isim(isim),level(1) {}
    void sutCek() {
        cout<<isim<<" oyuncusu " << level*10 << " hızında bir şut çekiyor\n";
    }

    void antremanYap() {
        cout << isim << " antreman yapıyor...\n";
        level++;
    }
};

class Tsubasa :public Oyuncu {
public:
    Tsubasa(): Oyuncu("Tsubasa") {}
    void kartalSutuCek() {
        cout << isim << " oyuncusu " << level*20 << " hızında bir Kartal şutu çekiyor\n";
    }
};

int main()
{
    setlocale(LC_ALL, "Turkish");

    Oyuncu o("Takashi Kishida");
    Oyuncu o2("Taro Misaki");
    o.sutCek();
    o.antremanYap();
    o.sutCek();
    o2.sutCek();
    Tsubasa t;
    t.sutCek();
    t.kartalSutuCek();
    t.antremanYap();
    t.sutCek();
    t.kartalSutuCek();

    cout << endl << endl;
    system("pause");
    return 0;
}