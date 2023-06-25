#include <iostream>
using namespace std;

// yıkıcı methıod her sınıf için bir tane olur

class base {
public:
    int* ptr;
    base(int i = 1) {
        cout << "Base kurucusu" << endl;
        ptr = new int(i);
    }

    base(const base& b) {
        cout << "Base kopyalama kurucusu" << endl;
        ptr = new int(*b.ptr);
    }

    ~base() {
        cout << "base yıkıcı" << endl;
        delete ptr;
    }

    base& operator=(const base& b) {
        cout << "base operator" << endl;
        delete ptr;
        ptr = new int(*b.ptr);
        return *this;
    }
};

class derived :public base {
public:
    int* ptr2;
    derived(int i = 3, int j = 2) : base(i) {
        cout << "Derived kurucusu" << endl;
        ptr2 = new int(j);
    }

    derived(const derived& d) : base(d) {
        cout << "Derived kopyalama kurucusu" << endl;
        ptr2 = new int(*d.ptr2);
    }

    ~derived() {
        cout << "derived yıkıcı" << endl;
        delete ptr2;
    }

    derived& operator=(const derived& d) {
        /*delete ptr;
        ptr = new int(*d.ptr);*/
        base::operator=(d); // üstteki gibi yaparsak fazla işlem olur aynısı base de var zaten. private olsaydı birde sıkıınıtı çıkardı
        cout << "derived operator"<<endl;
        delete ptr2;
        ptr2 = new int(*d.ptr2);
        return *this;

    }
};

int main()
{
    setlocale(LC_ALL, "Turkish");

    derived d(100, 200);
    cout << "main 1: ptr: " << d.ptr<<" ptr2: "<<d.ptr2 << endl;
    derived xd(300, 400);
    cout << "main 2: ptr: " << xd.ptr << " ptr2: " << xd.ptr2 << endl;
    xd = d;
    cout << "main 3: ptr: " << xd.ptr << " ptr2: " << xd.ptr2 << endl;


    cout << endl << endl;
    system("pause");
    return 0;
}