#include <iostream>

using namespace std;


int main()
{
    
    // bit düzeyinde operatörler

    /*
        & - | - ^ - ~ - << - >>
    */

    int a = 8, b = 4, c;  // 1000 0100
    c = a & b;
    cout << "Result of &: " << c << endl;

    c = a | b;
    cout << "Result of |: " << c << endl;

    c = a ^ b;
    cout << "Result of ^: " << c << endl;

    c = a << b;
    cout << "Result of <<: " << c << endl;

    c = a >> b;
    cout << "Result of >>: " << c << endl;

    c = ~ b;
    cout << "Result of ~: " << c << endl;



    cout << endl << endl;
    system("pause");
    return 0;
}