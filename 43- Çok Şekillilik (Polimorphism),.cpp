#include <iostream>
using namespace std;
// birbirini ezecek metodu sanallaştırıp ezmenin önüne geçebiliyoruz
class kedi {
public:
    virtual void sesVer() {
        cout << "Miyav" << endl;
    }
};

class aslan :public kedi {
public:
    void sesVer() {
        cout << "kürkredim" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Turkish");

    kedi k;
    aslan a;
    k.sesVer();
    a.sesVer();

    kedi* dizi[2];
    dizi[0] = &k;
    dizi[1] = &a;
    cout << endl;
    dizi[0]->sesVer();
    dizi[1]->sesVer();



    cout << endl << endl;
    system("pause");
    return 0;
}