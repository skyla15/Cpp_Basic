// continue 사용시 do/while loop 사용방법 
#include <iostream>
 
using namespace std;

int main()
{
	// do while 사용방법 
	int count{ 0 };
	do
	{
		if (count == 5)
			continue;

		cout << count << endl;
		// ++count 
		// count == 5, 무한루프 빠져버림 
	} while (++count < 10);


	// Escape_Flage 
	bool escape_flag = false;
	while (!escape_flag) {
		char ch;
		cin >> ch;

		if (ch == 'x')
			escape_flag = true; // break; 
	}
	system("pause");
}
