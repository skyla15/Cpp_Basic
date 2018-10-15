#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void print(int array[]) {
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}


int main() {
	// 초기 값 입력 
	int array[10]{ 3, 2, 1, 6, 5, 4, 9, 8 , 7, 10 };
	// 초기 값 출력
	cout << "정렬 전 배열 상태 : ";
	print(array);

	for (int i = 0; i < 10; i++)
	{
		int getIndex = i;
		for (int j = i; j < 10; j++)
		{
			if (array[getIndex] > array[j])
			{
				getIndex = j;
				// getIndex : 시작점의 값과 비교하여 가장 작은값의 인덱스를 저장
			}
		}

		// 스와핑
		//std::swap(array[getIndex], array[i]);

		
		// getindex(가장 작은값)과 시작점의 값을 스와핑함.
		int temp; // 스와핑을 위한 변수
		temp = array[getIndex];
		array[getIndex] = array[i];
		array[i] = temp;
	}


	// 정렬후 배열 출력
	cout << "정렬 후 배열 상태 : ";
	print(array);
	cout << endl;

	system("pause");
	return 0;
}
