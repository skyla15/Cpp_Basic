#include <iostream>

/*
 * C++ 에서는 포인트 없이 해당 변수의 참조자를 받아와 변경 가능 
 * int a = 10;
 * int &ref = a;
 * 여기서 &는 참조자. 
 * ref는 a의 닉네임으로 ref를 변경시 a의 값도 변경이 된다.
 
 * C에서는 포인터를 이용.
 */

void print(int& a, int& b){
  cout << a << " " << b << endl;
}

int main(){
  int x, y;
  x = 1;
  y = 2;
  print(x, y);
}
