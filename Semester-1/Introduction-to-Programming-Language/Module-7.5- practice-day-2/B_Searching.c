#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int x;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}
