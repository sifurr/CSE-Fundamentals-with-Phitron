#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x, v;
    scanf("%d %d", &x, &v);

    for (int i = n - 1; i >= 0; i--)
    {
        // check if x and i both are equal
        if (x == i)
        {
            // then assign the value of v to i-th position of the array a
            a[i] = v;
            // printf("%d [i = %d],  [x = %d], [v = %d]\n", a[i], i, x, v );
        }
        printf("%d ", a[i]);
    }

    return 0;
}


https://www.hackerrank.com/mehoman
@mehoman