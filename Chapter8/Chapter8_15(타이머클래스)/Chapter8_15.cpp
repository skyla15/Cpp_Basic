// Chapter8_15.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>

using namespace std;

class Timer
{
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;

	std::chrono::time_point<clock_t> start_time = clock_t::now();

public :
	void elapsed()
	{
		std::chrono::time_point<clock_t> end_time = clock_t::now();

		cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << endl;
	}
};


int main()
{
	random_device rnd_device;
	mt19937 mersenne_engine{ rnd_device() };
	vector<int> vec(1000000);

	for (unsigned int i = 0; i < vec.size(); i++)
	{
		vec[i] = i;
	}

	std::shuffle(begin(vec), end(vec), mersenne_engine);

	/*
	for (auto &e : vec)
		cout << e << " ";

	cout << endl;
	*/

	Timer timer;

	std::sort(begin(vec), end(vec));

	timer.elapsed();
	
	/*
	for (auto &e : vec)
		cout << e << " ";

	cout << endl;
	*/
	
    return 0;
}

