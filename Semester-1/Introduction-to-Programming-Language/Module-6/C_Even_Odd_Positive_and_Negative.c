#include <stdio.h>

int main()
{
    int n = 0, odd = 0, even = 0, positive = 0, negative = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int m;

        scanf("%d", &m);

        if (m % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (m > 0)
        {
            positive++;
        }
        else if(m < 0)
        {
            negative++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);

    return 0;
}