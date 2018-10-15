#include <iostream>


using namespace std;

/*
	c 스타일 배열 받는 방법 

	#define NUM_STUDENT 100000       // 큰 수로 미리 설정 
	cin >> NUM_STUDENT;
	int student[NUM_STUDENT];        // fixed array로 동적배열 설정 방법 

	c++ 배열 선언시 
	cont int NUMSTUDENT = 5             // const 로 컴파일 이전에 NUMSTUDENT 고정
	int student[NUMSTUDENT];            

*/


enum StudnetName
{
	Jaca,
	Dash,
	Violet, 
	NumStudent, // StudentName을 배열로 만들 경우, 총 갯수로 사용 
};

int main() {
	int students_scores[NumStudent]; // Jaca, Dash, Violet의 자료를 넣을 크기 활용 

	cout << Jaca << endl;
}
