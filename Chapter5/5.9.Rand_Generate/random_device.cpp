#include <iostream>
#include <cstdlib> // std::rand(), std::srand() 
#include <ctime> // time(0)

#include <random> // C++ 11, random 함수, 권장 
using namespace std;
int main()
{
	std::random_device rd; // random device, seed로 사용 
	std::mt19937 mersenne(rd()); // 32비트 난수, seed : rd()
	// std::mt19937_64 : 64bit 난수
	std::uniform_int_distribution<> dice(1, 6); // 1~6 까지 동일한 확률로 나오도록 설정

	int count = 0; 
	for (int i = 0; i <= 20; ++i) {
		count++;
		cout << dice(mersenne) << " ";
		if (count % 5 == 0)
			cout << endl;
	}

	system("pause");
}
