#include <iostream>
using namespace std;
#include "Nokta.h"

int main()
{
    setlocale(LC_ALL, "Turkish");

    /*
    Nokta n1(0, 0);
    Nokta n2(3, 4);
    cout << n1.uzaklikHesapla(n2); // öncki deste yapamamıştık burada çalıştı
    */

    Nokta n1(2, 5);
    Nokta n2(15, 30);
    Nokta n3 = n1.topla(n2);
    n3.ekranaYaz();


    cout << endl;
    system("pause");
    return 0;
}