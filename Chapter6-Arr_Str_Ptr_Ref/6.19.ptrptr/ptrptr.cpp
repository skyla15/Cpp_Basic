// 이중 포인터 
/*
	이중배열 구현시 사용 
*/

#include <iostream>
using namespace std;

int main()
{	
	const int row = 3;
	const int col = 5;
	const int s2da[row][col] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	/*****************************************************/

	int **matrix = new int*[row];	
		// 메모리 해제시 : r1~3 -> matrix 
	for (int r = 0; r < row; r++) {
		matrix[r] = new int[col];
	}

	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++)
		{
			matrix[r][c] = s2da[r][c];
		}
	}

	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++)
		{
			cout << matrix[r][c] << " ";
		}
		cout << endl;
	}

	cout << endl;

	// 메모리해제 
	for (int r = 0; r < row; r++) {
		delete[] matrix[r];
	}

	delete[] matrix;

	/*****************************************************/


	int *r1 = new int[col] {1, 2, 3, 4, 5};
	int *r2 = new int[col] {6, 7, 8, 9, 10};
	int *r3 = new int[col] {11, 12, 13, 14, 15};
	int **rows = new int*[row] {r1, r2, r3};

	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++)
		{
			cout << rows[r][c] << " ";
		}
		cout << endl;
	}

	system("pause");

}
