#include <iostream>
using namespace std;

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
};

class derived :public base {
public:
    int* ptr2;
    derived(int i=3,int j = 2) : base(i) {
        cout << "Derived kurucusu" << endl;
        ptr2 = new int(j);
    }

    derived(const derived& d) : base(d) {
        cout << "Derived kopyalama kurucusu" << endl;
        ptr2 = new int(*d.ptr2);
    }
};

int main()
{
    setlocale(LC_ALL, "Turkish");

    /*base b(100);
    cout << b.ptr << "\t" << *b.ptr << endl;
    base xb = b;
    cout << xb.ptr << "\t" << *xb.ptr << endl;*/

    derived d(150,250);
    cout << d.ptr2 << "\t" << *d.ptr2 << endl;
    derived xd = d;
    cout << xd.ptr2 << "\t" << *xd.ptr2 << endl;

    cout << "\n\n";
    cout << d.ptr << "\t" << *d.ptr << endl;
    cout << xd.ptr << "\t" << *xd.ptr << endl;


    cout << endl << endl;
    system("pause");
    return 0;
}