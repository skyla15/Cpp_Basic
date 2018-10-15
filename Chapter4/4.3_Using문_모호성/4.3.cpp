// 4.3 Using문의 모호성 

#include <iostream>

/*
	using namespace std;    : namespace 통째로 가져오는 경우
	using std::cout         : std 안의 cout만 가져와서 사용하는 경우 

	using namespace 
	-> 헤더에 넣을 경우 전체 코드에 영향을 주기때문에 위험하다 
	-> 전역변수로 사용하는 것도 좋지 않다 .
*/

namespace a
{
	int my_var(10);
}

namespace b
{
	int my_var(20);
}

int main() {
	using namespace std;
	// using namespace a;
	// namespace a와 b의 영향을 둘 다 받기때문에 
	// using namespace 마다 묶어준다

	// cout << my_var << endl;   모호합니다 에러 

	// namespace a만 사용하고싶을 경우 
	cout << a::my_var << endl; 

	{
		using namespace b; 
		cout << my_var << endl;  

	}

	{
		using namespace a;	
		cout << my_var << endl;
	}	

	return 0;
}
