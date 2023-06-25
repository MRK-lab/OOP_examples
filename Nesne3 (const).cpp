#include <iostream>

using namespace std;

int main()
{
    
    // 'const' Keyword (const Anahtar sözcüğü bir değişkenin değerinin sabit olduğunu belirtir ve derleyiciye programcının değiştirmesini engellemesini söyler. )

    const float pi = 3.142;
    const int cap = 5;
    cout << "\nArea of cicle: " << pi * cap * cap;
    cout << "\nCircumference of cicle: " << 2 * pi * cap;

    // pi = 125; olmaz böyle şey

    // 'volatile' Keyword (Kelime anlamı olarak bir değişkenin geçici, uçucu değere sahip olmasını ifade eder.)

    /*
    int bar = 0;
    while (bar == 0)
    {
        cout << "Selamlar";
    }
    */

    // (Örneğin geliştirdiğimiz bir programda, farklı işlem(process) veya donanımsal etkiler 
    // sonucunda değeri değişen bir değişken(variable) kullanıyorsak, bu değişkeni volatile 
    // olarak tanımlamamız gerekir.Aksi halde derleyici(compiler) bu değişkeni optimize ederek 
    // görevini yerine getiremez bir hale sokabilir.)
    
    /*
    volatile int bar2 = 0;
    while (bar2 == 0)
    {
        cout << "Selamlar";
    }
    */






    cout << endl << endl;
    system("pause");
    return 0;
}