#include <stdio.h>

int main()
{
    int n, c = 0;
    scanf("%dn", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = a[0];

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            if (min > a[i])
            {
                min = a[i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (min == a[i])
        {
            c++;
        }
    }

    if (c % 2 != 0)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }

    return 0;
}
