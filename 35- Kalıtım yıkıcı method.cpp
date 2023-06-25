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
};

int main()
{
    setlocale(LC_ALL, "Turkish");

    int* p1, * p2;
    {
        derived d(12,58);
        p1 = d.ptr; // adresleri alırız
        p2 = d.ptr2;
        cout << d.ptr << " " << d.ptr2 << endl;
        cout << p1 << " " << p2 << endl;
        cout << *d.ptr << " " << *d.ptr2 << endl;
    }
    cout << p1 << " " << p2 << endl; // yıkıcılar açıksa 12,58 değerleri {} içinde kaldığı için burada alamayız
    cout << *p1 << " " << *p2 << endl;


    cout << endl << endl;
    system("pause");
    return 0;
}