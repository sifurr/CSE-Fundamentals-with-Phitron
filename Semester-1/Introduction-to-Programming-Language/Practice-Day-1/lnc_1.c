#include <stdio.h>

int main()
{
   
   int n, number=0, min, max;
   min = 10000000;
   max = 0;

   scanf("%d", &n);
   for (int i = 0; i < n; i++)
   {
    scanf("%d", &number);

    if(number < min){
        min = number;
    }else if(number > max){
        //  printf("Maximum: %d\n", max);
        max = number;
    }
   }
   printf("Maximum: %d\n", max);
   printf("Minimum: %d\n", min);
   
   return 0;
}