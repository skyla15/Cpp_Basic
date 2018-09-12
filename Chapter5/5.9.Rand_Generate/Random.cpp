#include <iostream>
#include <cstdlib> // std::rand(), std::srand() 
#include <ctime>
using namespace std;


int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0); 
	// generates floating number between 0 < fraction < 1.0 
	return min + static_cast<int>((max - min + 1)*(rand()*fraction));
}

unsigned int PRNG()
{
	static unsigned int seed = 5523; // seed number, starting num for rand 
	seed = 8253729 * seed + 2396403; // static, for re-using changed seed 

	return seed % 32768;
}


int main()
{
	for (int count = 1; count <= 10; count++)
	{
		cout << PRNG() << "\t";
		if (count % 5 == 0)
			cout << endl; 
		// 한줄에 5개씩 출력
	}
	cout << endl;
	cout << endl;


	// seed가 같을 경우 rand() 출력값 같음 
	// => time 이용 
	cout << "seed : 5523" << endl;
	srand(5523);
	for (int count = 1; count <= 10; count++)
	{
		cout << rand() << "\t";
		if (count % 5 == 0)
			cout << endl;
	}
	cout << endl;
	cout << endl;


	// time이용 난수 생성 
	srand(static_cast<unsigned int>(time(0)));
	for (int count = 1; count <= 10; count++)
	{
		cout << rand() << "\t";
		if (count % 5 == 0)
			cout << endl;
	}
	cout << endl;
	cout << endl;

	// min, max 난수 생성 
	for (int count = 1; count <= 100; count++)
	{
		cout << getRandomNumber(5, 8) << "\t";
		// cout << rand() % 4 + 5 << endl;
		// 5 ~ 8 난수
		if (count % 5 == 0)
			cout << endl;
	}
	

	system("pause");
}
