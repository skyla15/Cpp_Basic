#include <iostream>
#include <string>
#include <vector>

using namespace std;

int add(int a, int b)
{
	int result = a + b;
	return result;
}

double add(double a, double b)
{
	double result = a + b;
	return result;
}

string add(string s1, string s2)
{
	string result = s1 + s2;
	return result;
}

vector<int> add(vector<int> matrix1, vector<int> matrix2)
{
	vector<int> result = matrix1;

	for (auto &e : matrix2)
	{
		result.push_back(e);
	}
	return result;
}

int main()
{
	cout << "정수형 덧셈 : " << add(1, 2) << endl;
	cout << "실수형 덧셈 : " << add(1.5, 2.3) << endl;

	cin.clear();

	string s1, s2;
	cout << "첫번째 문자열 : ";
	getline(cin, s1);
	cout << "두번째 문자열 : ";
	getline(cin, s2);
	cout << "스트링 연결" << add(s1, s2) << endl;

	vector<int> matrix1{ 1,2,3 };
	vector<int> matrix2{ 4,5,6 };
	vector<int> result = add(matrix1, matrix2);
	for (auto &e : result)
		cout << e << " ";
	system("pause");
}
