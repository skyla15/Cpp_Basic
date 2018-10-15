#include <iostream>
using namespace std;

void swap(int& x, int& y, int& z)
{
	x = 10;
	y = 100;
	z = 1;
}

int main()
{
	int x = 1;
	int y = 10;
	int z = 100;

	cout << "변경전 : " << x << " " << y << " " << z << endl;
	swap(x, y, z);
	cout << "변경후 : " << x << " " << y << " " << z << endl;
}
