#include <iostream>

using namespace std;


class Date
{
private :
	int m_month;
	int m_day;
	int m_year;

public :
	void setDate(const int& month_input, const int& day_input, const int& year_input)
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}

	const int& getDay()
	{
		return m_day;
	}

	// 복사 생성자 
	void copyFrom(const Date& original)
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}
};

int main()
{
	Date today;
	today.setDate(8, 4, 2015);

	Date copy;
	copy.copyFrom(today);

	cout << today.getDay() << endl;	

	system("pause");
}