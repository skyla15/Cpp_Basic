#include "Declaration.h" 

int main(){
  Circle c; // 클래스 선언 
  
  c.x = 100;
  c.y = 100;
  c.radius = 50;
  
  cout << c.calcArea() << endl; // 클래스 멤버 변수 
  
  return 0;
}
