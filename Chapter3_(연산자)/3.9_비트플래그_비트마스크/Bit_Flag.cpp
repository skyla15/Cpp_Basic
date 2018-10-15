
#include <iostream>
#include <bitset>

/* 
	비트마스킹 
	1) unsigned 정수형 사용 
	2) true 표시 ( OR ) : flag | item 
	3) true -> false ( XOR ) : flag & ~item  
	                           flag ^ item  
*/

using namespace std;

int main()
{
	/*
		bool item1_flag = false;
		bool item2_flag = false;
		bool item3_flag = false;
		bool item4_flag = false;

		... events ...
	*/

	// char = 8 bit, 1byte
	// 8개의 비트로 표현을 통해 8개의 true/false 표현 가능 

	const unsigned char opt0 = 1 << 0; // 0000 0001
	const unsigned char opt1 = 1 << 1; // 0000 0010
	const unsigned char opt2 = 1 << 2; // 0000 0100
	const unsigned char opt3 = 1 << 3; // 0000 1000
	// bitset<8> 
	unsigned char items_flag = 0;
	cout << "No item " << bitset<8>(items_flag) << endl;

	// item0 흭득, or 연산자를 이용 
	items_flag = items_flag | opt0;
	cout << "item0 obtained : " << bitset<8>(items_flag) << endl;

	// item3 흭득 
	items_flag = items_flag | opt3;
	cout << "item3 obtained : " << bitset<8>(items_flag) << endl;

	// item3 잃어버림 
	items_flag = items_flag & ~opt3;
	cout << "item3 lost : " << bitset<8>(items_flag) << endl;

	// has item 0?
	cout << "has item 0?" << endl;
	cout << bitset<8>(opt0 & items_flag )<< endl; // 0000 0001
	if (opt0 & items_flag) { cout << "I have item0" << endl;}
	else { cout << "I do not have item0" << endl; }


	// item0, 2 흭득 
	items_flag = items_flag | (opt0 | opt2);
	cout << "item0,2 obtained : " << bitset<8>(items_flag) << endl;


	// has item2 but not item1?
	// item2 잃게하고 item1을 갖도록 바꾸기 	
	if ((items_flag & opt2) && !(items_flag & opt1)) {
		// 상태를 바꿔주는 것은 XOR
		//items_flag = items_flag ^ opt2;
		//items_flag = items_flag ^ opt1;
		cout << "item 2 lost, item1 obtained: ";
		items_flag = (items_flag^opt1) ^ opt2;
	}

	cout << bitset<8>(items_flag) << endl;

    return 0;
}
