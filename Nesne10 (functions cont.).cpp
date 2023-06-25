#include <iostream>
using namespace std;

void funOne(int a, int& b, char v);
void funTwo(int& x, int y, char& w);

int main()
{
    int num1, num2;
    char ch;
    num1 = 10; // line1
    num2 = 15; // line2
    ch = 'A'; // line3

    cout << "Line4: Inside main: num1= " << num1 << ", num2= " << num2 << ", and ch= " << ch << endl; // line4
    funOne(num1, num2, ch); // line5
    cout << "Line 6: After funOne: num1= " << num1 << ", num2= " << num2 << ", and ch= " << ch << endl; // line6
    funTwo(num2, 25, ch); // line7
    cout<<"Line9: After funTwo: num1= " << num1 << ", num2= " << num2 << ", and ch= " << ch << endl; // line8

    // NOT: '&' işareti kullanıldığında void de olsa main fonksiyonunda da değişiklik yapıyor

    cout << endl << endl;
    system("pause");
    return 0;
}

void funOne(int a, int& b, char v)
{
    int one;
    one = a; // line9
    a++; // line10
    b = b * 2; // line11
    v = 'B'; // line12
    cout << "Line 13: Inside funOne: a= " << a << ", b= " << b << ", v= " << v << ", and one= " << one << endl; // line13
}   

void funTwo(int& x, int y, char& w)
{
    x++; // line14
    y = y * 2; // line15
    w = 'G'; // line16
    cout << "Line 17: Inside funTwo: x= " << x << ", y= " << y << ", and w= " << w << endl; // line17
}