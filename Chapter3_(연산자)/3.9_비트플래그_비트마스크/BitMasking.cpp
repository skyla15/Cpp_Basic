// Chapter3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	// 0xRRGGBB
	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;
	
	cout << bitset<32>(red_mask) << endl; // pixel color 2진수로 표시 
	cout << bitset<32>(green_mask) << endl; // pixel color 2진수로 표시 
	cout << bitset<32>(blue_mask) << endl; // pixel color 2진수로 표시 

	unsigned int pixel_color = 0xDAA520;
	cout << bitset<32>(pixel_color) << endl; // pixel color 2진수로 표시 

	// 
	unsigned char blue = pixel_color & blue_mask;
	cout << "blue " << bitset<8>(blue) << " " << (int)blue << endl;

	/*	unsigned char green = pixel_color & green_mask;

		green 색이 차지하는 위치는 9~16번째
		char의 경우 1~8번쨰까지밖에 안보여줌 
		따라서 결과값을 shift연산자를 통하여 오른쪽으로 밀어주어야 원하는 green 값이 추출됨

		int green =  pixel_color & green_mask
		green :	1010 0101 0000 0000 
		char green = ( pixel_color & green_mask ) >> 8 : 1010 0101 
	*/

	unsigned char green = (pixel_color & green_mask) >> 8;
	cout << "green " << bitset<8>(green) << " " << (int)green << endl;

	unsigned char red = (pixel_color & red_mask) >> 16;
	cout << "red " << bitset<8>(red) << " " << (int)red << endl;	

	return 0;
		
}

