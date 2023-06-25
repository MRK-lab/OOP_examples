#include <iostream>
using namespace std;

class bClass
{
public:
    void setData(double);
    void setData(char, double);
    void print() const;
    bClass(char = '*', double = 0.0);

protected:
    char bCh;
private:
    double bX;
};

void bClass::setData(double u)
{
    bX = u;
}

void bClass::setData(char ch, double u)
{
    bCh = ch;
    bX = u;
}

void bClass::print() const
{
    cout << "Base class: bch= " << bCh << ", bX= " << bX << endl;
}

bClass::bClass(char ch, double u)
{
    bCh = ch;
    bX = u;
}


class dClass :public bClass
{
public:
    void setData(char, double, int);
    void print() const;
private:
    int dA;
};

void dClass::setData(char ch, double v, int a)
{
    bClass::setData(v);
    bCh = ch;
    dA = a;
}

void dClass::print() const
{
    bClass::print();
    cout << "Derived (turetmek) class dA= " << dA << endl;
}

int main()
{
    // base class and derived (türetilmiş) class

    bClass bObject;
    dClass dObject;

    bObject.print();
    cout << endl;
    cout << "*** Derived class object***" << endl;
    dObject.setData('&', 2.5, 7);
    dObject.print();


    cout << "\n\n\n";
    system("pause");
    return 0;
}