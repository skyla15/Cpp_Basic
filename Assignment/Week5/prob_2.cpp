#include <iostream>

using namespace std;


void checkScore(int scr)
{
	// 점수 조건에 따른 성적 출력
	if (scr >= 90) 
		cout << "A 입니다" << endl;
	else if( scr >= 80 && scr < 90)
		cout << "B 입니다" << endl;
	else if (scr >= 70 && scr < 80)
		cout << "C 입니다" << endl;
	else if (scr < 70)
		cout << "D 입니다" << endl;

}

int main()
{
	int scr;
	while(true)
	{
		cout << "학생의 점수를 입력하세요 : ";
		cin >> scr;
		checkScore(scr);
	}

	return 0;
}
