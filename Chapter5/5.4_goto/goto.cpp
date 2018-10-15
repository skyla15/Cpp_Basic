// goto 사용법 : label 설정 후 goto label 
// 

#include <iostream>
#include <cmath> // sqrt()

using namespace std;

int main()
{
	double x;

tryagin :
	cout << "Enter a non-negative number : ";
	cin >> x;

	if (x < 0.0)
	{
		cout << "try agin" << endl;
		goto tryagin;
	}


	cout << sqrt(x) << endl;
	
	system("pause");
}
