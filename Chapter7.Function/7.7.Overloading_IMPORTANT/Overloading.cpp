#include <iostream>
#include <string>
using namespace std;


void print(char *string) {
	cout << "string" << endl;
}

void print(float f) {}
void print(unsigned int ui) {}



int main() {
	print((char*)'a');
	// print("a");
	/* print("a") => 문자열 const char* 형
		void print(const char *string) 

		print(3.14)
		print(0)  : ambiguous match => float, unsinged int 
		=> u f 등의 숫자를 뒤에 붙이거나 캐스팅을 통해 명확히 할것 
	*/;
	
	print(3.14f);
	print(0u);

	system("pause");
}
