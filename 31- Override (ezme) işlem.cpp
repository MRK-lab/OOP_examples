#include <iostream>
using namespace std;

// override != overloading
// override: kalıtım alınmalı.bir sınıfa ait bir metodun, o sınıftan türetilmiş bir sınıf içerisinde aynı isimli bir metod tanımlanarak, bu metodun temel sınıftaki metodun yerine geçirmeye denir

class Base {
public:
    int data[100];
    int size;
    int x = 0;
    Base() :size(0) {};
    void add(int value) {
        data[size] = value;
        size++;
    }

    void print() {
        cout << "Base print()" << endl;
        for (int i = 0; i < size; i++)
            cout << data[i] << " ";
    }
};

class derived :public Base{
public:
    float data[100];
    int size;
    derived() :size(0) {};
    void add(float value) {
        data[size] = value;
        size++;
    }

    void x() {
        cout << "Hello word" << endl;
    }

    void print() {
        Base::print(); // taban sınıfınkini çağır daha sonra bu sınıfa geç anlamına gelir
        cout<<endl << "Derived print()" << endl;
        for (int i = 0; i < size; i++)
            cout << data[i] << " ";
    }

    void addInt(int value) {
        Base::add(value);
    }
};

int main()
{
    setlocale(LC_ALL, "Turkish");

    Base b;
    b.add(10);
    b.add(25);
    b.add(33);
    b.print();

    cout << endl << endl;
    derived d;
    d.addInt(5);
    d.addInt(7);
    cout << endl;
    d.add(3.15);
    d.add(2.7);
    d.add(2.8);
    d.print();
    cout << endl;
    d.x();

    Base* ptr = &d; // dönüşüm işlemi yaptık
    ptr->x = 2;
    cout<<"dönüşümle x'i yazdırma: " << ptr->x << endl << endl;

    cout << d.size << endl; // kaç eleman girildiğini görürüz
    d.add(58);
    cout << d.size << endl;

    

    cout << endl <<endl;
    system("pause");
    return 0;
}