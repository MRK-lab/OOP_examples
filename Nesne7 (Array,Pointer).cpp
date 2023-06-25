#include <iostream>

using namespace std;

int* funcArray() // dianmik
{
    int* arr = new int[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    return arr;
}

int* funcArray2() // statik
{
    static int arr[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    return arr;
}

int main()
{
    // Pointer, Array use
    
    // dinamik
    int *aryPtr = funcArray(); // pointer tipinde bid değişkene dizi ataması yapıldı
    cout << aryPtr[0] << " " << aryPtr[1] << " " << aryPtr[2];

    //statik
    cout << endl << endl;
    int* aryPtr2 = funcArray2();
    cout << aryPtr2[0] << " " << aryPtr2[1] << " " << aryPtr2[2];




    cout << endl << endl;
    system("pause");
    return 0;
}