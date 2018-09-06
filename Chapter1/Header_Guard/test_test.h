//#pragma once 


// 만약에 같은 헤더파일이 여러군데 include가 된다면 
// #pragma once 혹은 #ifndef를 이용해서 한번만 선언이 되도록 만들어준다.
// #pragam once == #ifndef , #define, #endif 사용
#ifndef My_Test
#define My_Test

void test_test() {
	printf("this is test_test");
}

#endif
