/*
	형변환 오버로딩
	1) int 강제 형변환
	2) cents <-> Dollar 형변환 
	
*/
#include "9.9_header.h"
using namespace std;

void printInt(const int &value)
{
	std::cout << value << std::endl;
}

int main()
{
	using namespace std;
	Cents c1, c2;
	cout << "입력 : ";
	cin >> c1;
	cout << c1 << " " << endl;

	Cents cents(7);
	/*
		int 형변환 
		(int) x; // old-style cast, old-style syntax  
		int(x); // old-style cast, functional syntax  
	*/
	int value = (int)cents;
	value = int(cents);
	value = static_cast<int>(cents);

	printInt(cents);


	/* 
		Dolalr 형변환
	*/
	Dollar dol(2);

	Cents cents2 = dol;

	printInt(cents2);

	std::cout << "hi" << endl;

	system("pause");
}

