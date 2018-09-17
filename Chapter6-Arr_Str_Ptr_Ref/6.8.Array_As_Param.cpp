#include <iostream>
#include <iomanip>
#include <string>


// Arrays in Class or Struct
// 매개변수로 클래스나 스트럭트로 보내질 경우 포인터로 형변환 x
using namespace std;

struct MyStruct 
{
	int array[5]{ 1,2,3,4,5 };
};


void doSomething(MyStruct ms) 
{
	cout << sizeof(ms.array) << endl; // 20;
}


void doSomething2(int array[])
{
	cout << sizeof(array) << endl; // 4
}

int main() {
	int array1[5]{ 1,2,3,4,5 };
 	MyStruct ms;
	cout << sizeof(array1) << endl; // 20;
	cout << sizeof(ms.array) << endl; // 20;
	doSomething(ms);
	doSomething2(array1);

	system("pause");
}
