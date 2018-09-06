
#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {

	int cnt = 0;

	cout << "DNA1 : ";
	string s1;
	getline(cin, s1);

	cout << "DNA2 : ";
	string s2;
	getline(cin, s2);
	
	if (s1.length() != s2.length())
		cout << " 문자열 길이 다름 " << endl;

	else {
		for (int i = 0; i < s1.length() ; i++) {
			if (s1[i] != s2[i])
				cnt + 1;
		}
	}

	cout << "해밍 거리 : " << cnt << endl;

	system("pause");
	
}
