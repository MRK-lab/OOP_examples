#include <iostream>
using namespace std;
#include "Kolon.h"
#include <time.h>


int main()
{
	srand(time(NULL));

    Kolon k(5);
    for (int i = 0; i < 5; i++)
        k[i] = rand() % 50;
    k.print();

    cout << "post kullanim: ";
    k++;
    k.print();
    cout << "pre kullanim: ";
    ++k;
    k.print();

    cout << "-post kullanim: ";
    k--;
    k.print();
    cout << "-pre kullanim: ";
    --k;
    k.print();


    cout << endl << endl << endl;
    system("pause");
    return 0;
}