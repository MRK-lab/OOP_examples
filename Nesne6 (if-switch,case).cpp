#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    
    // Switch-Case (Durum değiştir)

    char myString;

    cout << "Enter an uppercase vowel character (Büyük harfle bir sesli harfi yazınız): ";
    cin >> myString;

    switch (myString)
    {
    case 'A': {cout << "Character entered is A" << endl; break; }
    case 'E': {cout << "Character entered is E" << endl; break; }
    case 'I': {cout << "Character entered is I" << endl; break; }
    case 'O': {cout << "Character entered is O" << endl; break; }
    case 'U': {cout << "Character entered is U" << endl; break; }
    }

    // goto yapısı (istenilen noktaya geri döner)
    int num = 5;

    if (num > 0)
    {
        cout << "Number is greater than 0" << endl;

        if (num <= 5)
            goto label;
        else if (num > 5)
            cout << "Number is greater then 5 too" << endl;
    }
    
label:if (num == 5)
cout << "Number is equal to 5" << endl;
else if (num < 5)
    cout << "Number is less than 5";

    



    cout << endl << endl;
    system("pause");
    return 0;
}