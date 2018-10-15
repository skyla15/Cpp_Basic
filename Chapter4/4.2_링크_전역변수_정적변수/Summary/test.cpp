// 내부연결 
static int static_global_number; //정적 전역 변수
static const int static_global_constant = 20000; // 정적 전역 상수
static int goo(int x) { return x * x; } // 정적 함수 
inline int hoo(int x) { return x / 2; } // 인라인함수
template<typename T> //템플릿 함수 
T ioo(T x) { return x * x * x; } // 템플릿 함수 

//외부연결
int global_number; // 일반 전역 변수 
const int global_constant = 10000; // 일반 전역 상수, C에서만 유효 
int foo(int x) { return x + 1; } // 일반함수

