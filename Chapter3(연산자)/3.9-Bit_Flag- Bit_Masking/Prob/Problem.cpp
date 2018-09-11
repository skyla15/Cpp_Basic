#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	/*
		아래의 경우에서 
		1) 기사를 보았을 경우 XOR
		2) 기사의 좋아요를 클릭하였을 경우  XOR
		3) 기사의 좋아요를  다시 클릭하였을 경우 XOR
		4) 본 기사를 삭제할 경우 ( flag & viewed ) XOR ( delete )

		답안
		XOR 연산
	*/

	
	unsigned char option_viewed = 0x01;  // 0000 0001
	unsigned char option_edited = 0x02;  // 0000 0010
	unsigned char option_liked = 0x04;   // 0000 0100
	unsigned char option_shared = 0x08;  // 0000 1000
	unsigned char option_deleted = 0x80; // 1000 0000

	unsigned char my_article_flag = 0;   // 0000 0000, 16 x 8 = 2^(4+3) = 2^(7)

	// viewed 
	cout << "viewed " << endl;
	my_article_flag ^= option_viewed;
	cout << bitset<8>(my_article_flag) << endl;
	cout << endl;

	// liked 
	cout << "liked1 " << endl;
	my_article_flag ^= option_liked;
	cout << bitset<8>(my_article_flag) << endl;
	cout << endl;

	// liked again
	cout << "liked2 " << endl;
	my_article_flag ^= option_liked;
	cout << bitset<8>(my_article_flag) << endl;
	cout << endl;

	// viewed & delete 
	// 이미 보았고 & 지운다 
	cout << "delete already viewed articles " << endl;
	my_article_flag = (my_article_flag & option_viewed) ^ option_deleted;
	cout << bitset<8>(my_article_flag) << endl;
	cout << endl;

	return 0;
		
}

