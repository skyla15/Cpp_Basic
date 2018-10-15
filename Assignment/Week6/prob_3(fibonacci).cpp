#include <iostream>
using namespace std;

int fibonacci(int n)
{
  // 항이 1개 이거나 0개 일 경우 해당값을 반환 
	if (n == 0 || n == 1)
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int fifteen = 15;
	for (int i = 0; i < fifteen; i++)
		cout << fibonacci(i) << " ";

	cout << endl;
}
