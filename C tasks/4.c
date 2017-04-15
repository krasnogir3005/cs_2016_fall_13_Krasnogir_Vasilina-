#include <stdio.h>
#define swap1(t,a,b) {t x; x = a; a = b; b = x;}
  int main()
  {
     int a = 3;
     int b = 4;
   printf("%d %d\n",a,b);
     swap1(int,a,b);
   printf("%d %d\n",a,b);
return 0;
}
