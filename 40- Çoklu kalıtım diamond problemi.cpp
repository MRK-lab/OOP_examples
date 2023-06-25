#include <iostream>
using namespace std;

class A {
public:
    int x;
    A(int x=1):x(x) { cout << "A sınıfı\n"; }
};
class B:virtual public A {
public:
    B() { cout << "B sınıfı\n"; }
};
class C: virtual public A {
public:
    C() { cout << "C sınıfı\n"; }
};
class D:public B,public C {
public:
    D() { cout << "D sınıfı\n"; }
};

int main()
{
    setlocale(LC_ALL, "Turkish");

    A a;
    cout << endl;
    B b;
    cout << endl;
    C c;
    cout << endl;
    cout << endl;
    D d;
    cout << d.x<<endl; // sanal olduğu için skop belirtmeden okuma ve yazma yapabiliriz
    d.x = 25;
    cout << d.x << endl;


    cout << "\n\n";
    cin.get(); // enter tuşa bakmasını bekiliyor
    system("pause");
    return 10;
}