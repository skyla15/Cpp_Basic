#include <stdio.h>
#include <windows.h>

typedef struct des {
   unsigned int key : 10;  
   unsigned int left : 5;
   unsigned int right : 5;
}DES;

char getBit(unsigned short x, short n)
{
   return (x & (1 << n)) >> n;
}

int main() {
   DES des;
   des.key = 0b1010010000;
   des.left = (des.key >> 5);
   
   char bit;

   for (short i = 0; i < 5; i++)
   {
      bit = getBit(des.left, i);
      printf("%d  ", bit);
   }
   system("pause");
}
