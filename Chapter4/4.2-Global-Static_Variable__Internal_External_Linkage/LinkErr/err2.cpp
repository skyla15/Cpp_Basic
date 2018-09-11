#include <iostream>
//  External Linkage : Extern 선언 변수 

/*
  err2_1.cpp
  ...
  extern int a = 2; 
  
  
  err2_2.cpp
  extern int a = 1;
  
  extern으로 선언이 되었기때문에 전체 프로젝트 관점에서 1개의 변수명만 있어야됨 
  err1.cpp와 err2.cpp에서 동시에 선언이 되었기에 링킹에러가 발생   
  
  => error LNK2005: "int a" (?a@@3HA)이(가) extern.obj에 이미 정의되어 있습니다.
*/

