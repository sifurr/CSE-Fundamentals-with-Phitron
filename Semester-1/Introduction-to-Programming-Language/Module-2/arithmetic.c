#include <stdio.h>

int main()
{
   // int a=3, b = 20;
   // float dvd = b*1.0 / a;
   // printf("%0.2f", dvd);
   
   int a=3, b = 20;
   int modBig = b % a;
   int modSmall = a % b;

   printf("%d", modBig);
   printf("\n");
   printf("%d", modSmall);
   
   return 0;
}