 //	#4.5 String Class
 //	std::string 

 /* 스트링 입력 받기 

	!!!! 중요 : 정수와 문자열을 같이 받을 경우 !!!!
	!!!! getline(cin, 변수명) 은 스트링을 받는 것
	!!!! cin 입력 받은뒤 버퍼를 비울 필요가 있을 경우 
	     => cin.ignore 사용 
	     => ex) cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 	
  
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
		 
		 s.substr(from) : from부터 문자열반환 
		 s.substr(from, to) : from부터 to까지의 문자열을 반환 
		 ex) 
		 	string s = "ABCDEF"
			s.substr(4); // "EF"
			s.substr(1,3); // "BCD"
		 
		 s.find(s2) : s에서 s2가 발견되는 첫번째 인덱스 반환
		 s.find(pos, s2) : s의 pos위치부터 s2가 발견되는 첫번 째 인덱스 반환
		

	 4) stirng 객체에서 문자추출 방법 : C의 문자열 배열처럼 사용

	 5) 문자열 배열
 */

#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
	// Try 1 
	cout << "try1" << endl;	
	cout << "age?" << endl;
	int age;
	cin >> age; // 버퍼에 age와 엔터가 입력되며 엔터가 버퍼에 남아있음

	cout << "name?" << endl;
	string name;
	getline(cin, name);  // 버퍼에 남아있던 값이 입력이 됨 
	cout << "이름:" << name << " " << "나이: " << age << endl; // 출력 : 1 


	cout << endl;
	cout << "try2" << endl;

	// Try 2
	cout << "age?" << endl;
	int age2;
	cin >> age2;  
	// cin에 입력 후 새로운 값을 입력하기 위하여 
	// cin.ignore(Token나올때까지 무시할 입력값, Tocken)
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 	// \n이 나오기 전까지 최대 streamsize개의 갯수를 무시한다

	cout << "name?" << endl;
	string name2;
	getline(cin, name2);  // 위에서 버퍼에 입력된 "엔터"가 들어감 
	cout << "이름: " << name2 << " " << "나이: " << age2 << endl; 

	

	cout << endl;	cout << endl;	cout << endl;


	
	const char my_strs[] = "hello, world";
	const string my_hello{ " Hello, World " };
	
	cout << "hello, world" << endl; // char[12]
	cout << my_hello << endl; // string 
	cout << my_strs << endl;// char[13]
	
	system("pause");

}


