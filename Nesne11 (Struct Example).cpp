#include <iostream>
using namespace std;

struct PersonalInfo // Personel bilgileri
{
    int age;
    char name[50];
    double salary;
};

void printStructInfo(PersonalInfo p)
{
    cout << "Personal Structure: ";
    cout << "\nAge: " << p.age;
    cout << "\nName: " << p.name;
    cout << "\nSalary: " << p.salary;
}

int main()
{
    PersonalInfo p;
    cout << "Enter name: ";
    cin.get(p.name, 50);
    cout << "Enter age: ";
    cin >> p.age;
    cout << "Enter salary: ";
    cin >> p.salary;

    printStructInfo(p);

    cout << endl << endl;
    system("pause");
    return 0;
}