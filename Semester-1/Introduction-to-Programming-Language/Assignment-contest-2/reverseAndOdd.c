#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        // check if i is an odd number
        if(i % 2 == 1)
        {
            // if our i is odd then print the i-th value  
            printf("%d ", a[i]);
        }
    }

    return 0;
}