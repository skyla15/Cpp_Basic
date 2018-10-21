

/* https://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B
 * Associativity ( 결합법칙 연습 )

 * 1 + 2 + 3 * 4 
   =>(  1 + 2 + ( 3 * 4 ) )

 * a = b = c 
   => ( a = ( b = c ) ),  = 연산자 : right to left 

 * t /= --w + 5 
   = t = --w + ( 5 / t )
   => --w
   => --w + (5/t)
   => (--w + (5/t))
   

 * a || b && c || d 
   => b && c
   => ( a || ( b && c ) )
   => ( ( a || ( b && c ) ) || d )
   
 * 
   :: ( namespace scope declaration ) 
   postfix operator(++. --.. )
   prefix operator, unary operator(-, !.. )
   *, %, /
   addition, subtraction
   >=, >, <, <=
   ==, !=
   &&
   || 
   나머지는 위키 참고 
 */

