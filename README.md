# Cpp_Basic

- Const 멤버 변수 접근 방법
- Class 
- 포인터 사용시	스마트포인터 사용 :	unique_ptr<자료형> 변수명(new 자료형 초기화)
-	unique_ptr<int> p(new int)
-	선언시 자동으로 nullptr설정 
- 사용 후 자동으로 메모리할당 해제(delete)
- unique_ptr<int[]> p(new int[10])
- unique_ptr<vector<int>> p2(new vector<int>);
- unique_ptr<Class> p3(new Class)
