#include <iostream>

using namespace std;


// Internal Linkage 
// 내부파일에서 사용가능한 변수를 사용되는 것들과 연결되는 것 
// obj 파일을 생성시 같이 연결이 됨
// 명명할 때 g등을 같이 붙여 global임을 알려줘야됨 .
int g_a = 1;



// forward declaration 
// 함수의 경우는 extern file에 선언이 되더라도 extern을 붙이지 않아도 
// 컴파일시에는 어딘가 있을 것이라고 생각하고 컴파일 
void doSomething(); 




int main(){
  ...
}
