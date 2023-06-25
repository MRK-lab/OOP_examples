#include <iostream>
using namespace std;

class insan {
protected:
    string tc;
    string isim;
    string soyisim;
public:
    insan(string tc="",string isim="",string soyisim="") : tc(tc),isim(isim),soyisim(soyisim){}
    string getTc() { return tc; }
    string getIsism() { return isim; }
    string getSoyisim() { return soyisim; }
    void setTc(string tc) { this->tc=tc; }
    void setIsism(string isim) { this->isim=isim; }
    void setSoyisim(string soyisim) { this->soyisim= soyisim; }
};

class ogrenci :public insan {
private:
    string ogrenciNo;
public:
    ogrenci(string ogrenciNo="", string tc="", string isim="", string soyisim="") : ogrenciNo(ogrenciNo),insan(tc,isim,soyisim) {}

    string getOgrenciNo() { return ogrenciNo; }
    void setOgrenciNo(string ogrenciNo) { this->ogrenciNo = ogrenciNo; }
};

int main()
{
    insan ali("12345678912","Ali","ATABAK");
    cout << ali.getTc() << " " << ali.getIsism() << " " << ali.getSoyisim() << endl;
    ogrenci org("123456", "12345678912", "Ayse", "ATABIN");
    cout<<org.getOgrenciNo()<<" " << org.getTc() << " " << org.getIsism() << " " << org.getSoyisim() << endl;


    cout << endl << endl;
    system("pause");
    return 0;
}