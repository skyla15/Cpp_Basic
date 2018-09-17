#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// student를 포인터로 받아옴
// 파라미터의 [9]는 의미 없음 
// student[] 
void doSomething(int student[9])
{
	cout << *(student + 9) << endl;
	// studnet[9]로 받았지만 10번째 인수도 접근 가능 
	cout << sizeof(student) << " doSomething size " << endl;
	// student 가 배열 복사가 아닌 포인터로 받아옴 
}
int main() {	
	const int student_num = 10;

	int student[student_num]{ 1,2,3,4,5,6,7,8,9,10 };

	doSomething(student);
	cout << sizeof(student) << " main size " << endl;
	system("pause");
}
