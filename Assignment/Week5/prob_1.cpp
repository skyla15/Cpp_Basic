#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	// 동일한 숫자가 안나오도록 seed를 time으로 설정 

	for (int count = 1; count <= 7; count++)
	{
		if (count == 7)
			cout << "+ "; // 보너스 번호

		cout << (rand() % 45 + 1) << " ";
		//출력

	}
	cout << endl;

	return 0;
}
