#include<iostream>
#include<string>
using namespace std;

string ReverseString(const string src, int len)
{
	string reverse;

	for (int i = 0; i<len; i++)
		reverse += src.substr(len - i - 1, 1);
	/*
		문자열을 맨 뒤의 위치부터 1개씩 잘라내어
		새로운 문자열 reverse에 저장 후 반환
	*/
	return reverse;
}

int main()
{
	string origin;
	//cin>>origin;  //space를 문자열의 끝으로 받아들인다. 
	getline(cin, origin); //한줄을 받아들이는 함수 C++ style

	string copy = ReverseString(origin, origin.size());

	cout << copy << endl;

	return 0;
}


