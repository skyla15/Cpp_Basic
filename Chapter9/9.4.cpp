/*
	비교 연산자 오버로딩 
	== , != , > , >= 
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
		: m_cents(cents)
	{}

	int getCents() const
	{
		return m_cents;
	}

	int& getCents()
	{
		return m_cents;
	}

	// std sort :: " < " 연산자를 사용하여야 함 
	friend bool operator < (const Cents &c1, const Cents &c2)
	{
		return (c1.m_cents < c2.m_cents);
	}

	friend bool operator == (const Cents &c1, const Cents &c2)
	{
		return (c1.m_cents == c2.m_cents) ? true : false;
	}

	friend std::ostream& operator << (std::ostream& out, const Cents &cents)
	{
		out << cents.m_cents;
		return out;
	}
};

int main()
{
	Cents cents1(6);
	Cents cents2(0);

	cout << boolalpha << (cents1 == cents2) << endl;


	/*
		연산자 오버로딩 없이 Sorting을 할 경우 에러 발생 
		=> 비교 연산자가 필요 
	*/
	vector<Cents> arr(20);
	for (unsigned i = 0; i < 20; i++) {
		arr[i].getCents() = i;
	}

	std::random_shuffle(begin(arr), end(arr));

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	std::sort(begin(arr), end(arr));

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	system("pause");
}
