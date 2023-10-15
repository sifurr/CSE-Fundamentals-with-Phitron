#include <stdio.h>

int main()
{
    int n, f = 0;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        b[i] = a[n - 1 - i];
    }

    for (int i = 0; i < n/2; i++)
    {
        if (a[0] != a[n-1] && a[i] != b[i] )
        {
            printf("%d %d ", a[0], a[n-1]);
            break;
        }
        else
        {
            f = 1;
        }
    }

    if (f == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
