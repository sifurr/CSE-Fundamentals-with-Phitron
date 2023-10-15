#include <stdio.h>

int main()
{
    int test;
    scanf("%d", &test);

    for (int t = 0; t < test; t++)
    {
        int m;
        
        scanf("%d", &m);
        do
        {            
            printf("%d ", m % 10);
            m = m / 10;
        } 
        while (m != 0);

        printf("\n");
    }

    return 0;
}