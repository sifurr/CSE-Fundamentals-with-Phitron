#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0], p, f = 0;

    for (int i = 1; i < n; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
            p = i + 1;
            f = 1;
        }
    }

    if (f)
    {
        printf("%d %d\n", min, p);
    }
    else
    {
        printf("%d 1\n", min);
    }

    return 0;
}