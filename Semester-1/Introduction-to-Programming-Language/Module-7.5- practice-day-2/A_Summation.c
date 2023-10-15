
// wrong answer
// #include <stdio.h>

// int main()
// {
//    int n=0;
//    long long int sum = 0;
//    int arr[n];

//    scanf("%d", &n);

//    for (int i = 0; i < n; i++)
//    {
//       scanf("%d", &arr[i]);
//    }

//    for (int i = 0; i < n; i++)
//    {
//       sum += arr[i];
//    }

//    if (sum < 0)
//    { 
//       printf("%lld\n", sum * -1);
//    }
//    else
//    {
//       printf("%lld\n", sum);
//    }

//    return 0;
// }


// Time  limit exit

// #include <stdio.h>

// int main()
// {
//    int n=1;
//    long long int sum = 0;
//    int arr[n];

//    scanf("%d", &n);

//    for (int i = 0; i < n; i++)
//    {
//       scanf("%d", &arr[i]);
//    }

//    for (int i = 0; i < n; i++)
//    {
//       sum += arr[i];
//    }

//    if (sum < 0)
//    { 
//       printf("%lld\n", sum * -1);
//    }
//    else
//    {
//       printf("%lld\n", sum);
//    }

//    return 0;
// }


// again time limit exit
// #include <stdio.h>

// int main()
// {
//    int n=1;
//    long sum = 0;
//    int arr[n];

//    scanf("%d", &n);

//    for (int i = 0; i < n; i++)
//    {
//       scanf("%d", &arr[i]);
//       sum += arr[i];
//    }

//    if (sum < 0)
//    { 
//       printf("%d\n", sum * -1);
//    }
//    else
//    {
//       printf("%d\n", sum);
//    }

//    return 0;
// }


// again time limit
// #include <stdio.h>

// int main()
// {
//    int n=1;
//    int sum = 0;
//    int arr[n];

//    scanf("%d", &n);

//    for (int i = 0; i < n; i++)
//    {
//       scanf("%d", &arr[i]);
//       sum += arr[i];
//    }
   
//    if (sum < 0)
//    { 
//       printf("%d\n", sum * -1);
//    }
//    else
//    {
//       printf("%d\n", sum);
//    }

//    return 0;
// }


// #include <stdio.h>
// #include <math.h>

// int main()
// {
//    int n=1;
//    int sum = 0;
//    int arr[n];

//    scanf("%d", &n);

//    for (int i = 0; i < n; i++)
//    {
//       scanf("%d", &arr[i]);
//       sum += arr[i];
//    }
   
//    if (sum < 0)
//    { 
//       printf("%d\n", abs(sum));
//    }
//    else
//    {
//       printf("%d\n", sum);
//    }

//    return 0;
// }



// #include <stdio.h>
// #include <math.h>

// int main()
// {
//    int n=1;
//    long long int sum = 0;
//    long arr=0;

//    scanf("%d", &n);

//    for (int i = 0; i < n; i++)
//    {
//       scanf("%d", &arr); 
//       sum += arr;    
//    } 
   
//    if (sum < 0)
//    { 
//       printf("%d\n", sum * -1);
//    }
//    else
//    {
//       printf("%d\n", sum);
//    }

//    return 0;
// }



#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);

   int arr[n];
   long long int sum = 0;

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]); 
      sum += arr[i];    
   } 
   
   if (sum < 0)
   { 
      printf("%lld\n", sum * -1);
   }
   else
   {
      printf("%lld\n", sum);
   }

   return 0;
}