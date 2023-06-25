#include <iostream>
using namespace std;

/*int artir(int x) {
    return x + 1; // float değerleri için düzgün çalışmaz
}

double artir(double x) {
    return x + 1;
}*/

template <typename T>
T artir(T x) {
    return x + 1;
}

template <typename T> // tüm veri tipleri için çalışan bir fonksiyon int-float-char...
void yerDegistir(T&x,T&y) {
    T temp = x;
    x = y;
    y = temp;
}

template <class T> // sınıflarda veri tipini kendisi keşfedemiyor
class benimSinifim {
public:
    T data;
    benimSinifim(T data):data(data){}
};

int main()
{
    /*cout << artir(1)<<endl;
    cout << artir(2.5);*/

    cout << artir(1) << endl;
    cout << artir(3.5) << endl;

    int a = 5;
    int b = 10;
    cout << a << "\t" << b << endl;
    yerDegistir(a, b);
    cout << a << "\t" << b << endl<<endl;

    char c1 = 'A';
    char c2 = 'B';
    cout << c1 << "\t" << c2 << endl;
    yerDegistir(c1, c2);
    cout << c1 << "\t" << c2 << endl<<endl;

    benimSinifim<int> bs(10);
    cout << bs.data << endl;
    benimSinifim<string> bs2("meraba");
    cout << bs2.data << endl;



    cout << endl << endl;
    system("pause");
    return 0;
}