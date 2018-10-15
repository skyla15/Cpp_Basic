#include <iostream>
using namespace std;


// 뱅크 선언 
class Bank
{
private :
	int balance;

public :
	Bank(int balance)
		: balance(balance)
	{}
	
	void getInfo()
	{
		cout << "은행 잔고 : " << balance << endl;
		// 잔고 출력
	}
	
	friend class Customer; // 고객의 멤버 변수에 접근하기 위한 프렌드 클래스 선언 ★
};

class Customer
{
private:
	int cash;

public :
	Customer(int cash) 
		:cash(cash)
	{}

	void getInfo()
	{
		cout << "보유 현금 : " << cash << endl;
	}


	friend class Bank; // 은행의 정보에 접근하기 위한 프렌드 뱅크 선언 ★

	void withDraw(Bank& bank, int money);
	void deposit(Bank& bank, int money);
};

void Customer::withDraw(Bank& bank, int money)
{
	cout << "출금 : " << money << endl;
	bank.balance -= money;
	cash += money;
	// 각 연산에 맞게 고객, 은행의 돈 플러스 마이너스 
}

void Customer::deposit(Bank& bank, int money)
{
	cout << "입금 : " << money << endl;
	bank.balance += money;
	cash -= money;
	// 각 연산에 맞게 고객, 은행의 돈 플러스 마이너스 
}

int main()
{
	Bank bank(2000);
	Customer customer(1000);

	bank.getInfo();
	customer.getInfo();

	customer.withDraw(bank, 500);
	bank.getInfo();

	customer.deposit(bank, 1000);

	bank.getInfo();
	customer.getInfo();


	return 0;
}
