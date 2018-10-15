#include <iostream>
#include <vector>

using namespace std;

class Stack
{
private :
	int size;
	int maxSize;
	int *stack;
	vector<int> v; // stack에 담긴 자료를 담을 벡터 생성

public :
	// 스택 클래스 초기화 
	Stack(int maxSize)
		: maxSize(maxSize)
	{
		stack = new int[maxSize];
		v.resize(size); // 벡터 사이즈 초기화
		size = 0; // 처음 스택의 사이즈 초기화 
	}

	void push(int element)
	{
		// 만약 현재 스택의 크기가 최대 스택의 크기보다 작을 경우 
		// 스택에 원소 삽입 
		if (size < maxSize)
		{		
			stack[size] = element;
			v.push_back(stack[size]); // 벡터에 현재 원소 삽입
			cout << "push : " << v[size++] << endl;
		}
		// 만약 현재의 스택의 사이즈가 최대사이즈보다 크거나 같은 경우 
		// 에러 메세지 출력 
		else if( size >= maxSize)
		{ 
			cout << "stack is full" << endl;
			return;
		}		
	}

	void pop()
	{
		// 만약 현재 스택이 있을 경우 pop 실행 
		if (size > 0)
		{
			size--; 
			// 사이즈를 먼저 줄여야됨
			// push에서 size는 현재 사이즈 + 1 인 상태 
			cout << "pop : " << v[size] << endl;
			v.pop_back();
		}
		else if (size <= 0)
		{
			cout << "stack is empty" << endl;
			return;
		}
	}

	int getSize()
	{
		return size;
	}


	// 동적할당 해제 및 벡터 초기화
	~Stack()
	{
		delete[] stack;
		v.clear();
	}
};


int main()
{
	const int MAX_SIZE = 5;
	Stack stack(MAX_SIZE);

	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);
	stack.push(6);

	stack.pop();
	stack.pop();
	stack.pop();
	stack.pop();
	stack.pop();
	stack.pop();


	return 0;
}
