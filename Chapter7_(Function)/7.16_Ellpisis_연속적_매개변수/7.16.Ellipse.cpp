#include <iostream>
#include <cstdarg>

using namespace std;

void findAverage(int count, ...)
{
	double sum;

	va_list list;
	// char형으로 list가 선언됨 

	va_start(list,count);
	// 인수를 count만큼 list에 받아먹음 

	for (int arg = 0; arg < count; arg++)
	{
		sum += va_arg(list, int);
			// list를 int형으로 변환 
	}

	va_end(list);
	// va_list 사용 종료 
	cout << sum << endl;

}

int main()
{
	findAverage(1, 1, 2, 3);
	//(count, 넘겨지는 인자.... )
	findAverage(10, 1, 2, 3);
	//count = 10, 넘어가는 인자 : 1, 2, 3 
	// => 쓰레기값이 넘어감 
}
