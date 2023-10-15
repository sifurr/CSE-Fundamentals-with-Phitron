#include <stdio.h>

int main()
{
    // set condition to loop 100 times
    // devide all the natural numbers,
    // and take the result who does not have any remainder
    // and print it from the loop

    int i = 1;
    int n = 3 * 100;
    while (i <= n)
    {      

        if(i % 3 == 0)
        {
            printf("%d\n", i);           
        }
         i++;
    }

    return 0;
}