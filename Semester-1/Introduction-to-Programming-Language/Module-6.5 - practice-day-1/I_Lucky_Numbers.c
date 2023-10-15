// #include <stdio.h>

// int main()
// {
//     int n, r, p;
//     scanf("%d", &n);

//     if (n == 10)
//     {
//         printf("NO\n");
//     }
//     else
//     {
//         r = n % 10;
//         p = n / 10;

//         if (r == 0)
//         {
//             printf("NO\n");
//         }
//         else
//         {
//             if (p % r == 0 || r % p == 0)
//             {
//                 printf("YES\n");
//             }
//             else
//             {
//                 printf("NO\n");
//             }
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n, r, p;
//     scanf("%d", &n);

//     r = n % 10;
//     p = n / 10;

//     if (r == 0 || p == 0)
//     {
//         printf("NO\n");
//     }
//     else
//     {
//         if (p % r == 0 || r % p == 0)
//         {
//             printf("YES\n");
//         }
//         else
//         {
//             printf("NO\n");
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n, x, y;
//     scanf("%d", &n);

//     x = n % 10;
//     printf("x %d", x);
//     y = n / 10;

//     if (x != 0 && y % x == 0 || y != 0 && x % y == 0)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n, x, y;
    scanf("%d", &n);

    x = n % 10;
    // printf("x ----> %d\n", x);
    y = n / 10;
    // printf("y ----> %d\n", y);

    if ((x != 0 && y % x == 0) || (y != 0 && x % y == 0))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

