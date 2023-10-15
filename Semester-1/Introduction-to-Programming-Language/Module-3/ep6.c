#include <stdio.h>

int main()
{
  int number=45621, remainder=0;
  
  while(number != 0){
    remainder = number % 10;
    number = number / 10;
    printf("%d", remainder);
  }  
   
   return 0;
}