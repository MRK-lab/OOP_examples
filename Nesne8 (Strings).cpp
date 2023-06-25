#include <iostream>
using namespace std;

int main()
{
    // boşluktan sonrasını almaz
    /*char firstStr[100];
    cin >> firstStr;
    cout << "you entered: " << firstStr;*/


    // boşluktan sonrasını da alır
    /*cout << endl << endl << endl;
    char secondStr[100];
    cin.get(secondStr, 100);
    cout << "you entered: " << secondStr;*/

    string str="";
    cout << "Input the string\n";
    // getline(cin,str;
    cin >> str;
    cout << "\nString entered is : " << str;
    int len = str.length();
    cout << "\nLength of the string str is: " << len;
    string str1 = "yazilimmuhendistigi";
    if (str.compare(str1) == 0) // karşılaştırma
    {
        cout << "\nTwo strings are equal\n";
    }
    else
    {
        cout << "\nTwo strings are not equal\n";
    }

    str1.append(".com"); // ekleme
    cout << "\nNew str1: " << str1;
    str.clear();
    cout << "\n\nstr new length: " << str.length();





    cout << endl << endl;
    system("pause");
    return 0;
}