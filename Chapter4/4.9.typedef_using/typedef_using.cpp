/*
	Typedef / using 
	1) 짧게 편하기 사용
	2) 유지보수 편하게 사용 가능 
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

	using pairlist_t2 = vector< pair<string, int> >;
	typedef vector< pair<string, int> > pairlist_t1;

}
