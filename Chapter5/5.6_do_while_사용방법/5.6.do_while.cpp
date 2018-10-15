// Varialbes must be declared outside the do/while loop
// 메뉴등을 보여줄 경우 사용 가능 
#include <iostream>
 
using namespace std;

int main()
{
	int selection;

	// 키워드를 보여준 뒤 
	// 올바르지 않은 키를 입력시에는 계속 반복 
	do
	{
		cout << "1. add" << endl;
		cout << "2. sub" << endl;
		cout << "3. mult" << endl;
		cout << "4. div" << endl;
		cin >> selection;
	} while (selection <= 0 || selection >= 5);
	

	cout << "You Selected : " << selection << endl;
	
	system("pause");
}
