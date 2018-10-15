/*
while문
	1) unsigned int : int보다 빠를 수 O  
					  오버플로우, 언더플로우 가능성
	2) for문보다 간결할 수 있음 
*/


#include <iostream>
#include <cmath> // sqrt()
 
using namespace std;

int main()
{
	int outer_count = 1;

	while (outer_count <= 5)
	{
		int inner_count = 1;
		while (inner_count <= outer_count)
		{
			cout << inner_count++ << " ";
		}
		cout << endl;
		++outer_count;
	}
/*
1
1 2
1 2 3
1 2 3 4 
1 2 3 4 5 
*/
	
	system("pause");
}
