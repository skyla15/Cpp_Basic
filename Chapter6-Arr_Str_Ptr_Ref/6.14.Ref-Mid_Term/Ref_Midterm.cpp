#include <iostream>

int main()
{	
	// 가능 
	int value = 1;
	int * const ptr = &value; //ptr의 주솟값 변경 x , Value는 변경 가능 
	int &ref = value;
	ref = 2;	
	
}
