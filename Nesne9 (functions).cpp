#include <iostream>
using namespace std;

void swap(int a, int b) // değiş tokuş
{
    b = a + b;
    a = b - a;
    b = b - a;
}

int addition(const int& a, const int& b) // ekleme
{
    return (a + b);
}

int main()
{
    int a, b;
    cout << "Enter the two numbers to be swapped: ";
    cin >> a >> b;

    cout << "a= " << a;
    cout << "\tb= " << b;

    swap(a, b);

    cout << "\nAfter swapping inside Main: \n";
    cout << "a: " << a << endl;
    cout << "\tb: " << b << endl;

    int res = addition(a, b);
    cout << "\n\nResult of addition: " << res;



    cout << endl << endl;
    system("pause");
    return 0;
}