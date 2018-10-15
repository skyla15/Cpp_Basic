#include <iostream>

int main()
{	
	
	// 불가능 : 참조자는 주소가 있어야 참조가 가능함 .
	// int &ref2 = 3;
	
	// 가능 
	int value = 1;
	int * const ptr = &value; //ptr의 주솟값 변경 x , Value는 변경 가능 
	int &ref = value;
	ref = 2;	
	
}
