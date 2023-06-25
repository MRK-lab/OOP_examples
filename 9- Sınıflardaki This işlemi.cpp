#include <iostream>
using namespace std;

class Nokta {
private:
	int x;
public:
	int getX();
	void setX(int);
};

int Nokta::getX() {
	return x;
}

void Nokta::setX(int x) {
	this->x = x; // burada görüldüğü gibi this sınıftaki x değişkeninden bahsediyor
}

int main()
{
	Nokta n;
	n.setX(12);
	cout << n.getX() << endl;


	cout << endl;
	system("pause");
	return 0;
}