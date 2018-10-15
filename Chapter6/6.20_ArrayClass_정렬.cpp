// Array Class
// begin(), end() : iterator to beginning 
// rbegin(), rend() : iterator to reverse beginning 

// 	array<int, 5>::iterator itr <=> arr.begin();

#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void print(array<int, 5>& arr)
{
	for (int& element : arr)
		cout << element << " ";

	cout << endl;
}


int main() {
	std::array<int, 5> arr = { 10, 20, 30, 1, 5 };
	print(arr);
	cout << endl;



	// 순서대로 정렬 
	std::sort(arr.begin(), arr.end()); 
	for (int& e : arr)
		cout << e << " ";

	cout << endl;


	// 역순 정렬 
	std::sort(arr.rbegin(), arr.rend());
	for (int& e : arr)
		cout << e << " ";

	system("pause");	
}
