#include <iostream>
using namespace std;

class base {
public:
    int* ptr;
    base(int i = 0) {
        ptr = new int(i);
    }
};

class derived :public base{
public:
    int* ptr2;
    derived(int i =0,int j=0) : base(i) {
        // ptr = new int(i); base(i) yazmadana böyle de yapabiliriz.
        ptr2 = new int(j);
    }
};

int main()      
{
    setlocale(LC_ALL, "Turkish");

    base b(100);
    cout << *b.ptr<<endl;

    derived d(50,25);
    cout << *d.ptr2 << endl;
    cout << *d.ptr << endl;


    cout << endl << endl;
    system("pause");
    return 0;
}