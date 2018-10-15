#include <iostream>
#include <string>
#include <ctype.h>



using namespace std;
int main()
{


	while(true)
	{
		int lower = 0; // 소문자 갯수 저장 변수
		int upper = 0; // 대문자 갯수 저장 변수
		int empty = 0; // 공백문자 갯수 저장 변수

		// 문자열 입력 받음 
		std::string my_string;
		cout << "문자열을 입력하세요 : ";
		getline(cin, my_string);
		cin.clear();
		// 입력되었던 버퍼들을 초기화!!!


		for (int i = 0; i < my_string.size(); i++)
		{		
			if (my_string[i] >= 65 && my_string[i] <= 90) // 대문자수 계산
				upper++;
			else if (my_string[i] >= 97 && my_string[i] <= 122) // 소문자수 계산
				lower++;
			else if (my_string[i] == ' ') // 공백문자 카운트
				empty++;
		}


		//출력

		cout << "소문자의 갯수는 " << lower << endl;
		cout << "대문자의 갯수는 " << upper << endl;
		cout << "공백문자의 갯수는 " << empty << endl;
		cout << endl;
	}


	return 0;
	
}
