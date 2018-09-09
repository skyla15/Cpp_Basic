# Cpp_Basic

- Const 멤버 변수 접근 방법
- Class 
- 포인터 사용시	스마트포인터 사용 :	unique_ptr<자료형> 변수명(new 자료형 초기화)
-	unique_ptr<int> p(new int)
-	선언시 자동으로 nullptr설정, 사용 종료시 자동으로 
- 한 대상을 단 하나의 포인터로만 설정 가능 
-  ex) unique_Ptr<class1> p1(new class1)
-     unique_ptr<class1> p2(new class1) // 에러 
 
