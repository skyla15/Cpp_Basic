#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*  선택 정렬
1) Index 0 의 숫자랑 비교를 하여 가장 작은값과 swap
2) index를 늘려주며 반복

3 5 2 1 4
1 5 2 3 4
1 2 5 3 4
1 2 3 5 4
1 2 3 4 5
*/


void print(int array[]) {
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int main() {
	int array[5]{ 3,5,2,1,4 };
	int result_arr[5];

	print(array);

	int temp;
	for (int i = 0; i < 5; i++)
	{
		int getIndex = i;
		for (int j = i ; j < 5; j++)
		{
			if (array[getIndex] > array[j])
			{
				getIndex = j; 
				// getIndex : 시작점의 값과 비교하여 가장 작은값의 인덱스를 저장
			}
		}

		// 스와핑
		temp = array[getIndex];
		array[getIndex] = array[i];
		array[i] = temp;

		print(array);

	}

	cout << endl;

	return 0;
}
