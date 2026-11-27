#include <stdio.h>

int main()
{
    //4.1 задание
   int a;
   printf("напиши число");
   scanf("%d", &a);
   for (int i = 1; i <= 10; i++)
   {
    if (a % i == 0)
     {
       printf ("%d", i);
     }
   }
   //4.2 задание
   int b;
   int c;
   printf("напиши 1 xbckj");
   scanf("%d", &b);
   printf("напиши 2 число");
   scanf("%d", &c);
   for (int i1 = 1; i1 <= b && i1 <= c; i1 ++)
   {
       if (b % i1 == 0 && c % i1 == 0)
       {
           printf("%d", i1);
       }
   }
   //4.3 задание
   int N;
   printf("напиши чисол");
   scanf("%d", &N);
   for (int i2 = 1; i2 <= N; i2++)
   {
       if (i2 <= N)
       {
           printf ("%d", i2);
       }
   }
   //4.4 pflfybt
   int a1;
   int b2;
   printf("yfgbib xbckj 1");
   scanf("%d",&a1);
   printf("напиши число 2");
   scanf("%d",&b2);
   if (a1 > b2)
    {
       int k = a1 - b2;
       printf("%d",k);
    }
   else
   {
       int k1 = b2 - a1;
       printf("%d",k1);
   }
   return 0;
}
