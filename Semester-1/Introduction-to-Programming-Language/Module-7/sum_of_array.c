#include <stdio.h>

int main()
{
    int n, sum=0;
    int arr[n];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    printf("%d", sum);

    return 0;
}