// Array Class
// begin(), end() : iterator to beginning 
// rbegin(), rend() : iterator to reverse beginning 

// 	array<int, 5>::iterator itr <=> arr.begin();

#include <iostream>
#include <array>

using namespace std;


char* resize(char *re_arr, int n)
{
	delete re_arr;
	re_arr = new char[n] {1, };
	return re_arr;
}

int main() 
{
	
	char *arr = new char[10]{ 1, };
	for (int i = 0; i < 10; i++)
		cout << static_cast<int> (arr[i]) << " ";

	cout << endl;

		
	arr = resize(arr, 20);
	for (int i = 0; i < 20; i++)
		cout << static_cast<int> (arr[i]) << " ";

	cout << endl;
	delete arr;
	system("pause");	
}
