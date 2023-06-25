#include <iostream>
using namespace std;

class yazici {
protected:
    string marka;
public:
    yazici(string marka): marka(marka) {
        cout << "yazıcı sınıfı\n";
    }
};

class tarayici {
protected:
    string marka;
public:
    tarayici(string marka): marka(marka) {
        cout << "tarayıcı sınıfı\n";
    }
};

class tarayiciliYazici :public yazici, public tarayici {
public:
    tarayiciliYazici(string m1,string m2): yazici(m1),tarayici(m2) {
        cout << "tarayıcılı yazıcı sınıfı\n";
        cout << yazici::marka << endl;
        cout << tarayici::marka << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Turkish");

    tarayiciliYazici ty("hp","asus");
    cout << endl;
    // cout << ty.tarayici::marka << endl; publicteyken



    cout << "\n\n";
    system("pause");
    return 0;
}