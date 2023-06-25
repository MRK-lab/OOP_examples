#include <iostream>
using namespace std;

class insan {
protected: // kalıtım alırsak kalıtım içinden bunlara erişmek isteriz
    string tc;
    string isim;
    string soyisim;
public:
    insan(string tc = "", string isim = "", string soyisim = "") : tc(tc), isim(isim), soyisim(soyisim) {}
    string getTc() { return tc; }
    string getIsism() { return isim; }
    string getSoyisim() { return soyisim; }
    void setTc(string tc) { this->tc = tc; }
    void setIsism(string isim) { this->isim = isim; }
    void setSoyisim(string soyisim) { this->soyisim = soyisim; }
};

class ogrenci :public insan {
private:
    string ogrenciNo;
public:
    ogrenci(string ogrenciNo = "", string tc = "", string isim = "", string soyisim = "") : ogrenciNo(ogrenciNo), insan(tc, isim, soyisim) {}

    string getOgrenciNo() { return ogrenciNo; }
    void setOgrenciNo(string ogrenciNo) { this->ogrenciNo = ogrenciNo; }

    void yazdir() {
        cout<<"Ogrenci No\t :" << ogrenciNo<<endl
            << "Tc No\t\t :"<< tc<<endl << "Isim\t\t : " << isim<<endl << "Soyisim\t\t : " << soyisim << endl;
    }
};

int main()
{

    ogrenci ogr("123456", "12345678912", "Ayse", "ATABIN");
    ogr.yazdir();


    cout << endl << endl;
    system("pause");
    return 0;
}