/*
	����ȯ �����ε�
	1) int ���� ����ȯ
	2) cents <-> Dollar ����ȯ 
	
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
	cout << "�Է� : ";
	cin >> c1;
	cout << c1 << " " << endl;

	Cents cents(7);
	/*
		int ����ȯ 
		(int) x; // old-style cast, old-style syntax  
		int(x); // old-style cast, functional syntax  
	*/
	int value = (int)cents;
	value = int(cents);
	value = static_cast<int>(cents);

	printInt(cents);


	/* 
		Dolalr ����ȯ
	*/
	Dollar dol(2);

	Cents cents2 = dol;

	printInt(cents2);

	std::cout << "hi" << endl;

	system("pause");
}

