#include <iostream>

using namespace std;

int GCD(int op1, int op2)
{
	if (op2 == 0)
		return op1;
	else
	{
		GCD(op2, (op1%op2));
	}
}

int main()
{
	cout << GCD(1041, 2031) << endl;
}
