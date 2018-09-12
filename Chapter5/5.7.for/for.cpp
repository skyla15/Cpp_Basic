// for문 : 반복횟수가 정해져있는 경우 많이 사용 
// 반복문의 경우 unsigned를 이용할 경우 오버/언더플로우 가능성 
#include <iostream>
 
using namespace std;

int main()
{
	for (unsigned int i = 10; i >= 0; i--) {
		cout << i << endl;
		// 언더플로우 발생
		// 10 9 8 7 6 5 4 3 2 1 0 4294967295 ......
	}
	system("pause");
}
