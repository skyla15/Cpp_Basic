#include <iostream>


int main() {
	using namespace std;

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << endl; // +inf
	cout << neginf << endl; // -inf
	cout << nan << endl; // -nan(ind)
	system("pause");

}
