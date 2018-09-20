#include <iostream>
// Reference && const 


int main()
{	
	// int &ref_x = 3; 
	// 에러 
	// 참조자는 주소가 있어야 참조 가능 

	const int &ref_x = 3; 
	// 저장 가능 
  
  /*
   doSomething(const int &a){
      cout << a << endl;
   }
   
   main() { 
      doSomething(1)
   }
  */
}
