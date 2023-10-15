#include <stdio.h>

int main()
{
    int n, sp = 0, sn = 0;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);

        // check if my i-th position value is negative at the time of input
        if (v[i] < 0)
        {
            sn += v[i];
        }
        else
        {
            sp += v[i];
        }
    }

    printf("%d %d\n", sp, sn);

    return 0;
}