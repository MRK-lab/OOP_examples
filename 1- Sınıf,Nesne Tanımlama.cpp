#include <iostream>
using namespace std;

class Nokta {
public:
    int x, y;
};

int main()
{
    Nokta n;
    n.x = 0;
    n.y = 5;

    cout << n.x << " , " << n.y;

    cout << endl;   
    system("pause");
    return 0;
}