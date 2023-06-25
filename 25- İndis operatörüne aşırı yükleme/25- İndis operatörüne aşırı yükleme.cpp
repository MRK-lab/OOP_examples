#include <iostream>
using namespace std;
#include "Kolon.h"
#include <time.h>

int main()
{
    srand(time(NULL));

    Kolon k(5);
    for (int i = 0; i < 5; i++)
    {
        k[i] = rand() % 50;
    }
    k.print();
    for (int i = 0; i < 5; i++)
    {
        cout<<k[i] << "  ";
    }
    k[1] = 12;
    cout << endl;
    k.print();

    cout << endl;
    system("pause");
    return 0;
}