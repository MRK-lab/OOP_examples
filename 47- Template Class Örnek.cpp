#include <iostream>
using namespace std;

template <class T>
class V {
    T* data; // dizi olacağı içiçn pointer türünde olmalı
    int index;
public:
    V() :index(0) {
        data = new T[100];
    }

    void ekle(T t) {
        data[index++] = t;
    }

    bool isEmpty()const {
        return index == 0;
    }

    void print()
    {
        for (int i = 0; i < index; i++)
            cout<<data[i] << " ";
        if (!isEmpty())
            cout << endl;
    }

    V<T> operator+(const V<T>& v) {
        V<T> temp;
        for (int i = 0; i < index; i++)
        {
            temp.ekle(data[i] + v.data[i]);
        }
        return temp;
    }
};

int main()
{
    V<int> v1, v2;
    v1.ekle(1);
    v1.ekle(3);
    v1.ekle(5);
    v1.print();
    v2.ekle(3);
    v2.ekle(10);
    v2.ekle(15);
    v2.print();
    (v1 + v2).print();
    cout << "\n\n";

    V<string> v3, v4;
    v3.ekle("ali ");
    v3.ekle("veli ");
    v3.ekle("ayse ");
    v3.print();
    v4.ekle("sanli");
    v4.ekle("turk");
    v4.ekle("bayragi");
    v4.print();
    V<string> v5 = v3 + v4;
    v5.print(); 


    cout << endl << endl;
    system("pause");
    return 0;
}