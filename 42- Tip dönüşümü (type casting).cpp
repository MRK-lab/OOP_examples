#include <iostream>
using namespace std;

class Insan {
public:
    string isim;
    Insan(string isim = "isimsiz: ") : isim(isim) {    }
};

class Sporcu :public Insan {
public:
    string takimAdi;
    Sporcu(string isim = "isimsiz", string takimAdi = "isimsiz") : Insan(isim), takimAdi(takimAdi) {    }
};

class Programcı :public Insan {
public:
    string prgDili;
    Programcı(string isim="isimsiz",string programlamaDili="isimsiz"):Insan(isim),prgDili(programlamaDili){}
};

int main()
{
    setlocale(LC_ALL, "Turkish");

    Insan i("Ahmet");
    Sporcu s("Alex", "TrabzonSpor");
    Programcı p("Arif", "C++");
    cout << i.isim << endl;
    cout << s.isim<<" "<<s.takimAdi << endl;
    cout << p.isim<<" "<<p.prgDili << endl;

    cout << "\n\n";
    Insan* dizi[3]; // aşşağı dönüşüm yaptık
    dizi[0] = &i;
    dizi[1] = &s;
    dizi[2] = &p;

    /*for (int i = 0; i < 3; i++)
    {
        cout << dizi[i]->isim << endl;
        if (dizi[i]->isim == "Arif")
            cout<<endl << "Var" << endl;
    }*/

    //dizi[1]->takimAdi; // şeklinde olmaz yukarıya doğru dönüşüm yapılmalı. olması için:
    Sporcu* ss = (Sporcu*)dizi[1];
    cout << ss->takimAdi << endl;
    Programcı* pp = (Programcı*)dizi[2];
    cout << pp->prgDili << endl;

    // Sporcu* hata = (Programcı*)dizi[2]; HATA: yanlış dönüşüm. sporu programcı
    Sporcu* hata = (Sporcu*)dizi[2]; // dizi[2] programcı olduğu halde sporcu sınıfına atmaka hatasının gösterimi
    cout << hata->isim << " " << hata->takimAdi << endl;

    cout << endl << endl;
    system("pause");
    return 0;
}