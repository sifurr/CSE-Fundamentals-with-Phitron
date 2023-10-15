// #include <stdio.h>

// int main()
// {
//      long long int n, m, k;

//      int count = 0;

//      scanf("%lld %lld %lld", &n, &m, &k);

//      if (n == 0 || k == 0)
//      {
//           count = 0;
//      }
//      else if (n == 1 || k == 1)
//      {
//           count = 1;
//      }
//      else
//      {
//           while (m != 0)
//           {
//                n = n - 1;
//                m = m - 1;
//                k = k - 1;
//                count++;
//                if (m == 0 )
//                {
//                     while (n > 1)
//                     {
//                          n = n - 2;
//                          k = k - 1;
//                          count++;
//                     }
//                }
//                if (n == 0)
//                {
//                     break;
//                }
//           }
//      }

//      printf("%d", count);

//      return 0;
// }

#include <stdio.h>

int main()
{
     long long int eyes, mouths, bodies;
     scanf("%lld %lld %lld", &eyes, &mouths, &bodies);

     long long  int count = 0;

     if (eyes < mouths && eyes < bodies)
     {
          count = eyes;
     }
     else if (mouths < eyes && mouths < bodies)
     {
          count = mouths;
     }
     else
     {
          count = bodies;
     }

     eyes = (eyes - count) / 2;
     mouths = mouths - count;
     bodies = bodies - count;

     if (eyes <= 0 || bodies == 0)
     {
          printf("%lld\n", count);
     }

     else
     {

          if (eyes < bodies)
          {
               count = count + eyes;
          }
          else
          {
               count = count + bodies;
          }
          printf("%lld\n", count);
     }

     return 0;
}