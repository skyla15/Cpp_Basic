/*
 1) getline(cin, string)
      스트링을 입력받을 경우 사용 
	  엔터를 쓸 때까지 읽어온다.

 2) cin.ignore(n, '\n');
      => n : stream을 통해 받아 들이는 크기를 지워버리고 싶은 크기
	  => '\n' : \n까지 입력된 것들을 모두 버려라 
         스트링과 다른 형을 같이 입력을 받는 경우 
	     cin을 통해 입력받고 엔터를 칠 경우 버퍼에 저장되는 것들을 
	     모두 지워진 뒤에 입력받아줘야함  

3) String Class 멤버 함수 
      string[i] : string의 i번 째 원소 
	  s.empty() : string이 비어있다면 true;
	  s.insert(pos, s2) : pos위치에 s2 삽입 
	  s.remove(pos, len) : s의 pos위치부터 len만큼 삭제
	  s.find(s2) : s에서 s2가 발견되는 첫번째 인덱스 반환 
	  s.find(pos, s2) : s의 pos위치부터 s2가 발견되는 첫번 째 인덱스 반환 

4) stirng 객체에서 문자추출 방법 : C의 문자열 배열처럼 사용 

5) 문자열 배열 
 */

#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {

	/****** 교수님 수업 *******/

	cout << "your age ? : ";
	int age;
	cin >> age;
	// cin.ignore(32767, '\n');
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	// 32767 = age로 들어올 수 있는 age의 최대크기 
	// 따라서 numeric_limits를 이용하여 확실하게 만들어줌 

	cout << "your name ? : ";
	string name;
	//cin >> name;
	getline(cin, name);

	cout << age << " " << name << endl;

	/****** 교수님 수업 *******/



	/****** 참고서 문자 추출 & 문자열 리스트  *******/
		
	cout << "주민등록번호 입력 : ";
	string id;
	getline(cin, id);
	

	// 문자 추출 
	for (auto& s : id) {
		if (s == '-') continue; 
		cout << s;
	}
	cout << endl;
	

	// 문자열 배열 
	string list[] = { "철수", "영희", "길동" };
	for (auto& x : list) {
		cout << x << "입니다." << endl;
	}

	system("pause");

	return 0;	
}
