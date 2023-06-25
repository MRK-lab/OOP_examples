#include <iostream>
using namespace std;
#include "Kolon.h"
#include <time.h>

int main()
{
    srand(time(NULL));
    Kolon k(5);
    Kolon k3(5);
    for (int i = 0; i < 5; i++)
    {
        k.set(i, rand() % 50);
        k3.set(i, rand() % 50);
    }
    cout << "k: ";
    k.print();
    cout << "k3: ";
    k3.print();
    Kolon k2=k3; // kopylama çalıştı
    cout << "k2: ";
    k2.print();
    k2 = k; // = kullanarak atama yapılır istenen yerde. kopyalama ile nesne kurulurken yapılmalıdır. (aradakşi fark)
    cout << "k2: ";
    k2.print();

    cout <<endl<<endl;
    k3 = k2 = k;
    k.print();
    k2.print();
    k3.print();

    cout << endl;
    system("pause");
    return 0;
}